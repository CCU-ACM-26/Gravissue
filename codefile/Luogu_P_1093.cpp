#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    int chinese, math, english;
    int score;
};

bool cmp(const Student &a, const Student &b)
{
    if (a.score != b.score)
        return a.score > b.score;
    if (a.chinese != b.chinese)
        return a.chinese > b.chinese;
    return a.id < b.id;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Student> student(n);
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].chinese >> student[i].math >> student[i].english;
        student[i].id = i + 1;
        student[i].score = student[i].chinese + student[i].math + student[i].english;
    }

    sort(student.begin(), student.end(), cmp);

    for (int i = 0; i < 5; i++)
    {
        cout << student[i].id << ' ' << student[i].score << '\n';
    }
    return 0;
}