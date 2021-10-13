using namespace std;
int main()
{

    space(50);
    cout << "WELCOME TO FIZZARD!" << endl
         << endl;
    space(38);

    cout << "CAPTCHA: ENTER THE BELOW TEXT TO CONTINUE" << endl;
    space(50);

    asst.generatecaptcha();

    cout << endl;
    space(50);

    while (!asst.getcaptcha())
        space(50);
