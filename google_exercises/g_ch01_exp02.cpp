#include <iostream>

double SetScore(const std::string& score_name = "main");
double GetGrade(double score, double coeff);

int main(){
    const double COEFF_ASSIGNMENT { 0.4 };
    const double COEFF_MIDTERM { 0.15 };
    const double COEFF_FINAL { 0.35 };
    const double COEFF_SECTION { 0.1 };

    double scr_first_assgn { SetScore("first assignment") };
    double scr_second_assgn { SetScore("second assignment") };
    double scr_third_assgn { SetScore("third assignment") };
    double scr_fourth_assgn { SetScore("fourth assignment") };
    double avg_assgn { (scr_first_assgn + scr_second_assgn + scr_third_assgn + scr_fourth_assgn) * 0.25 };
    
    double scr_mid_term { SetScore("midterm") };
    double scr_final { SetScore("final") };
    double scr_section { SetScore("section grade") };

    double final_grade { GetGrade(avg_assgn, COEFF_ASSIGNMENT) + GetGrade(scr_mid_term, COEFF_MIDTERM) 
                        + GetGrade(scr_final, COEFF_FINAL) + GetGrade(scr_section, COEFF_SECTION)};

    std::cout << "The final grade is: " << final_grade << '\n';

    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Declaration - - - - //

double SetScore(const std::string& score_name){
    double score {};
    std::cout << "Enter the score for the " << score_name << ": ";
    std::cin >> score;

    return score;
}

double GetGrade(double score, double coeff){
    return score * coeff;
}
