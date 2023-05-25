//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <ctime>
//#include <algorithm>
//using namespace std;
 
//int main()
//{
//    time_t time1 = time(NULL);
 
//    /*** что-то делаем ***/
 
//    time_t time2 = time(NULL);
 
//    cout << "Время работы программы равно " << time2 - time1 << "\n";
 
//    system("pause");
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <Windows.h>
//#include <iostream>
//#include <stdio.h>
//#include <locale>
//using namespace std;

//class Class{    
//public:
//    int x;
//    int y;
//    int z;

//    void print(Class &s){
//        cout << "x = " << s.x << "\n" << "y = " << s.y << "\n" << "z = " << s.z << "\n";
//    }
//};

//int main(void)
//{
//    setlocale(LC_ALL, "Russian");

//    SetConsoleCP(1251);
//    SetConsoleOutputCp(1251);

//    Class test;
    
//    test.x = 1;
//    test.y = 2;
//    test.z = 3;

//    test.print(test);

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <bits/stdc++.h>

//using namespace std;

//int main(void) {
//    int n = 0, x = 0 flag = 0;
    
//    cin >> n;

//    for (int i = 0; i < n; i++) {
//        cin >> x;

//        if (x == 0) {
//           flag += 1;
//        }
//    }
//    cout << flag;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <bits/stdc++.h>

//using namespace std;

//int main(void) {
//    char arr[100];
//    int flag_g = 0, flag_ng = 0;

//    cin >> arr;

//    for (int i = 0; i < strlen(arr); i++) {
//        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
//            flag_g += 1;
//        }
//        else {
//            flag_ng += 1;
//        }
//    }
//    cout << flag_g << " " << flag_ng; 
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <bits/stdc++.h>

//using namespace std;

//int main(void) {
//    int n = 0, flag = 0;

//    cin >> n;

//    for (int i = 1; i < n + 1; i++) {
//        if (n % i == 0) {
//            flag += 1;
//        }
//    }
//    cout << flag;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <bits/stdc++.h>

//using namespace std;

//int main(void) {
//    int n = 0, flag = 0, i = 1;

//    cin >> n;

//    while (i < n + 1) {
//        if (n % i == 0) {
//            flag += 1;
//        }
//        i++;
//    }
//    cout << flag;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <bits/stdc++.h> 

//using namespace std;

//int main() {
//    int x1, y1, x2, y2;

//    cin >> x1 >> y1 >> x2 >> y2;

//    if (x1 + 1 == x2 && y1 == y2 || x1 == x2 && y1 + 1 == y2 || x1 + 1 == x2 && y1 + 1 == y2 || x1 - 1 == x2 && y1 == y2 || x1 == x2 && y1 - 1 == y2 || x1 - 1 == x2 && y1 - 1 == y2 || x1 - 1 == x2 && y1 + 1 == y2 || x1 + 1 == x2 && y1 - 1 == y2) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>

//using namespace std;

//int main() {
//    int f = 0, i = 1, x = 1;

//    cin >> f;

//    while (i < f + 1) {
//        x = x * i;
//        i++;
//    }
//    cout << x;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Переворот вектора
//std::reverse(v.begin(), v.end());
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream> // библиотека для cin и cout
//#include <string> // библиотека string
//#include <vector> // библиотека vector

//using namespace std; // пространство имен std

//int main() { // главная main
//    int n = 0, ans = 0; // переменные для количество людей | счетчик
//    cin >> n; // ввожу людей
//    vector<vector<string>> arr(n); // создаю двумерный массив или же вектор векторов

//    // считываю двумерный массив или же вектор векторов
//    for (int i = 0; i < n; i++) { // человек
//        for (int j = 0; j < 3; j++) { // ассоциация
//            string a; // переменная для ввода
//            cin >> a; // ввожу
//            arr[i].push_back(a); // добавляю в конец вектора
//        }
//    }

//    for (int i = 0; i < n; i++) { // человек n
//        for (int j = 0; j < i; j++) { // человек n + 1
//            int tmp = 0; // временная переменная 
//            for (int a1 = 0; a1 < 3; a1++) { // ассоциации n 
//                for (int a2 = 0; a2 < 3; a2++) { // ассоципции n + 1
//                    if (arr[i][a1] == arr[j][a2]) { // если n человек и его ассоциация == n + 1 человеку и его ассоциации
//                        tmp++; // то к переменной добавляю +1
//                    }
//                }
//            }
//            if (tmp > ans) {
//                ans = tmp;
//            }
//        }
//    }
//    cout << ans; // вывожу
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//int main() {
//    int n = 0;
//    cin >> n;
//    vector<bool> request(64001, false);
//    vector<int> arr(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }

//    for (int i = 0; i < arr.size(); i++) {
//        if (request[arr[i] + 32000] == false) {
//            request[arr[i] + 32000] = true;
//            cout << arr[i] << ' ';
//        }
//    }
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>

//using namespace std;

//int main() {
//    int result = 0;
//    char c;
//    vector<char> numbers;

//    while (cin >> c) {
//        numbers.push_back(c);
//    }

//    for (int i = 0, j = numbers.size(); i < numbers.size(); i++, j--) {
//        result += pow((numbers[i] - '0') * 2, j);
//    }
//    cout << result / 2;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// сортировка хоара
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//void quicksort(vector<int> &arr, int begin, int end);

//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> arr(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }

//    quicksort(arr, 0, n);

//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << ' ';
//    }

//    return 0;
//}

//void quicksort(vector<int> &arr, int begin, int end) {
//    if (end - begin <= 1) {
//        return;
//    }
//    int mid = (begin + end) / 2;
//    quicksort(arr, begin, mid);
//    quicksort(arr, mid, end);

//    vector<int> temp(end - begin);

//    int ptr1 = begin, ptr2 = mid, ptr3 = 0;
//    while (ptr1 != mid && ptr2 != end) {
//        if (arr[ptr1] < arr[ptr2]) {
//            temp[ptr3] = arr[ptr1];
//            ++ptr1, ++ptr3;
//        } else {
//            temp[ptr3] = arr[ptr2];
//            ++ptr2, ++ptr3;
//        }
//    }
//    while (ptr1 != mid) {
//        temp[ptr3] = arr[ptr1];
//        ++ptr1, ++ptr3;
//    }
//    while (ptr2 != end) {
//        temp[ptr3] = arr[ptr2];
//        ++ptr2, ++ptr3;
//    }

//    for (int i = 0; i < temp.size(); i++) {
//        arr[begin + i] = temp[i];
//    }
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>

//using namespace std;

//int main(void) {
//    int y, r, b; cin >> y >> r >> b;
//    r += b / 10;
//    y += r / 10;
//    cout << y / 10;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//int main() {
//    int n; cin >> n;
//    vector<int> arr(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }

//    for (int i = n - 1; i != -1; i--) {
//        cout << arr[i] << ' ';
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>

//using namespace std;

//int main() {
//    string str; cin >> str;

//    for (int i = 0; i < str.size(); i++) {
//        if (i % 2 == 1) {
//            cout << str[i];
//        }
//    }

//    for (int i = str.size(); i >= 0; i--) {
//        cout << str[i];
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//int main() {
//    int n, cnt = 1; cin >> n;
//    vector<vector<int>> arr(n, vector<int>(n));

//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            arr[i][j] = cnt;
//            cnt++;
//        }
//        if (i % 2 == 1) {
//            reverse(arr[i].begin(), arr[i].end());
//        }
//        for (int j = 0; j < n; j++) {
//            cout << arr[i][j] << ' ';
//        }
//        cout << '\n';
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 1 YES
//#include <iostream>

//using namespace std;

//int main() {
//    int a, b, t, cnt_a = 0, cnt_b = 0; cin >> a >> b >> t;

//    for (;cnt_a < t;) {
//        cnt_a += a;
//    }
//    for (;cnt_b < t;) {
//        cnt_b += b;
//    }
//    if (cnt_a - t > cnt_b - t) {
//        cout << cnt_b - t;
//    } else if (cnt_a - t < cnt_b - t || cnt_a - t == cnt_b - t) {
//        cout << cnt_a - t;
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 2 NO / YES
//#include <iostream>

//using namespace std;

//int main() {
//    long long ball, dino, dino_price, p1, p2, p3, cnt = 0; cin >> ball >> dino >> dino_price >> p1 >> p2 >> p3;

//    for (int i = 1; ball < dino_price * dino; i++) {
//        if (i % 3 == 1) {
//            ball += p1;
//        } else if (i % 3 == 2) {
//            ball += p2;
//        } else if (i % 3 == 0) {
//            ball += p3;
//        }
//        cnt++;
//    }
//    cout << cnt;
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 3 NO / YES
//#include <iostream>

//using namespace std;

//int main() {
//    int okr_m, pr_m, cnt = 0; cin >> okr_m >> pr_m;

//    while (okr_m > 0) {
//        if (cnt == 0 || cnt % 2 == 0) {
//            okr_m -= pr_m;
//        }
//        else if (cnt % 2 == 1) {
//            okr_m -= pr_m + 1;
//        }
//        cnt++;
//    }

//    cout << cnt;
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//int main() { int str, min, res, cnt; std::cin >> str >> min >> res; for (int i = 0; i * str < res; i++, cnt += min) {} std::cout << cnt; }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//int main() {
//    int n; cin >> n;
//    vector<int> arr(n);
//    vector<int> cnt(10001);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        cnt[arr[i]] += 1;
//    }
//    for (int i = 0; i <= 10000; i++) {
//        for (int j = 0; j < cnt[i]; j++) {
//            cout << i << ' ';
//        }
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//int main() {
//    long long n, k; cin >> n >> k;
//    vector<long long> arr(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr.begin(), arr.end());

//    cout << arr[k - 1];
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//#include <vector>

//using namespace std;

//int main() {
//    int n, m, r, cnt = 0; cin >> n >> m >> r; // длина ответа | сколько учеников | придел
//    vector<char> res(n); // ответ учителя
//    vector<vector<char>> arr_res(m, vector<char> (n)); // ответы учеников
//    vector<int> arr_cnt(m, 0), arr_max(m); // счетчик | максимальный счетчик

//    for (int i = 0; i < n; i++) {
//        cin >> res[i];
//    }
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> arr_res[i][j];
//        }
//    }
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (res[j] != arr_res[i][j]) { // если элемент учителя не равен элементу ученика 
//                arr_cnt[i] += 1;
//            }
//            if (res[j] == arr_res[i][j] || j == n - 1) { // если элемент учителя равен элемент ученика | или j проходит последний раз по циклу
//                if (arr_max[i] < arr_cnt[i]) { // если максимальный счетчик меньше счетчика
//                    arr_max[i] = arr_cnt[i], arr_cnt[i] = 0;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < m; i++) {
//        cnt += arr_max[i];
//        cout << arr_max[i] << endl;
//    }
//    if (cnt >= r) {
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <locale>

//using namespace std;

//signed main() {
//    setlocale(LC_ALL, "Russian");

//    ofstream fail_input; ifstream fail_output; string str;

//    // INPUT
//    fail_input.open("fail.txt"); // fail_input.open("fail.txt", ofstream::app);
//    if (!fail_input.is_open()) {
//        cout << "fail.txt не может быть изменен\n";
//        return 0;
//    } else if (fail_input.is_open()) {
//        cout << "fail.txt может быть изменен\n";

//        while (str != " ") {
//            getline(cin, str); fail_input << str << endl;
//        }
//    }
//    fail_input.close();

//    // OUTPUT
//    fail_output.open("fail.txt");
//    if (!fail_output.is_open()) {
//        cout << "fail.txt не может быть открыт\n";
//        return 0;
//    } else if (fail_output.is_open()) {
//        cout << "fail.txt может быть открыт\n";

//        while (!fail_output.eof()) {
//            str = ""; getline(fail_output, str);
//            if (str != " ") {
//                cout << str << endl; 
//            }
//        }
//    }
//    fail_output.close();

//    // RETURN 0
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    pair<int, int> para(1, 2);
//    cout << para.first << ' ' << para.second << "\n";

//    para = make_pair(3, 4);
//    cout << para.first << ' ' << para.second << "\n";

//    para.first = 5; para.second = 6;
//    cout << para.first << ' ' << para.second << "\n";

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//typedef pair<int, int> ipair;

//bool comparator(ipair a, ipair b) {
//    if (a.second == b.second) {
//        return a.first > b.first;
//    } else {
//        return a.second < b.second;
//    }
//}

//signed main() {
//    int n, cnt = 0; cin >> n;
//    vector<ipair> arr(n);

//    for (int i = 0; i < n; i++) {
//        ipair p;
//        cin >> p.first >> p.second;
//        arr[i] = p;
//    }
//    sort(arr.begin(), arr.end(), comparator);

//    //проверка сортировки
//    cout << "\n";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i].first << ' ' << arr[i].second << "\n";
//    }
//    cout << "\n";
//    //проверка сортировки

//    for (int i = 0; i + 1 < n; i++) {
//        if (arr[i].second <= arr[i + 1].first) {
//            cnt++;
//        }
//    }

//    cout << cnt + 1;
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int n; cin >> n;
//    vector<int> arr(n);
//    vector<vector<int>> arr_copy(n, vector<int> (n));

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (arr[i] % 10 == 1) {
//                arr_copy[i][0] += 1; arr[i] = arr[i] % 10;
//            }
//            else if (arr[i] % 10 == 2) {
//                arr_copy[i][1] += 1; arr[i] = arr[i] % 10;
//            }
//            else if (arr[i] % 10 == 3) {
//                arr_copy[i][2] += 1; arr[i] = arr[i] % 10;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (arr_copy[i][2] != 0) {
//                cout << 3; arr_copy[i][2] -= 1;
//            }
//            else if (arr_copy[i][1] != 0 && arr_copy[i][2] == 0) {
//                cout << 2; arr_copy[i][1] -= 1;
//            }
//            else if (arr_copy[i][0] != 0 && arr_copy[i][1] == 0) {
//                cout << 1; arr_copy[i][0] -= 1;
//            }
//        }
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream> //lib
//#include <vector>
//#include <stdlib.h>

//using namespace std;

//enum Color_Apple { //цвета яблок
//    RED = 0,
//    YELLOW,
//    GREEN,
//    BROWN
//};

//class Apple { 
//public:
//    Apple() {}
//    Apple(int weight, Color_Apple color) { //конструктор принимает - вес, цвет
//        this->weight = weight; this->color = color;
//        cnt++;
//    }
//    ~Apple() { //деструктор
//        vector<int> arr(cnt); //вектор с ID яблок

//        for (int i = 0; i < cnt; i++) { //генерируем и выводим
//            arr[i] = rand(); cout << arr[i] << endl;
//        }
//    }
//private:
//    int cnt = 0; //сколько объектов
//    int weight = 0; //вес
//    Color_Apple color = GREEN; //цвет
//};
//int Apple::cnt = 0;

//signed main() {
//    Apple apple1(100, RED), apple2(150, BROWN), apple3(500, RED);

//    return 0;
//}
// указатель this указывает на текущий объект
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>

//using namespace std;

//signed main() {
//    int n; cin >> n;
//    vector<int> arr(n); vector<vector<int>> arr_string(n); vector<vector<int>> arr_string_max_size;

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        int t = arr[i];
//        while (t > 0) {
//            arr_string[i].push_back(t % 10);
//            t /= 10;
//        }
//    }
//    int max = 0;
//    for (int i = 0; i < n; i++) {
//        if (max < arr_string[i].size()) {
//            max = arr_string[i].size();
//        }
//    }
//    int max_size = max;
//    for (int i = 0; i < n; i++) {
//        if (arr_string[i].size() == max_size) {
//            sort(arr_string[i].rbegin(), arr_string[i].rend());
//            arr_string_max_size.push_back(arr_string[i]);
//        }
//    }
//    vector<int> number(arr_string_max_size.size());
//    for (int i = 0; i < arr_string_max_size.size(); ++i) {
//        for (int j = 0; j < arr_string_max_size[i].size(); j++) {
//            number[i] *= 10;
//            number[i] += arr_string_max_size[i][j];
//        }
//    }
//    sort(number.begin(), number.end());
//    cout << number[number.size() - 1];

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <stack>
//#include <string>

//using namespace std;

//signed main() {
//    stack<char> stak;
//    string input; cin >> input;

//    for (int i = 0; i < input.size(); i++) {
//        if (input[i] == '(' || input[i] == '[' || input[i] == '{') {
//            stak.push(input[i]);
//        } if (input[i] == ')') {
//            if (stak.size() != 0 && stak.top() == '(') {
//                stak.pop();
//            }
//            else {
//                cout << "NO";
//                return 0;
//            }
//        } if (input[i] == ']') {
//            if (stak.size() != 0 && stak.top() == '[') {
//                stak.pop();
//            }
//            else {
//                cout << "NO";
//                return 0;
//            }
//        } if (input[i] == '}') {
//            if (stak.size() != 0 && stak.top() == '{') {
//                stak.pop();
//            }
//            else {
//                cout << "NO";
//                return 0;
//            }
//        }
//    }
//    if (stak.size() != 0) {
//        cout << "NO";
//    }
//    else {
//        cout << "YES";
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    int sd, human, cnt = 0; cin >> sd >> human;
//    vector<int> sd_human(human);

//    for (int i = 0; i < human; i++) {
//        cin >> sd_human[i];
//    }
//    sort(sd_human.begin(), sd_human.end());
//    for (int i = 0; sd > 0 && i != human; i++) {
//        sd -= sd_human[i];
//        if (sd < 0) {
//            cout << cnt;
//            return 0;
//        }
//        cnt++;
//    }
//    cout << cnt;

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <locale>
//#include <string>

//using namespace std;

//class Core {
//public:
//    void Start() {
//        start = 1; cout << "Запуск пк...\n";
//    }
//    void End() {
//        start = 0; cout << "Выключение пк...\n";
//    }
//protected:
//    int start = 0;
//};
//class Debian : public Core {
//public:
//    int Setting() {
//        if (start == 1) {
//            set = 1; cout << "Запускаю настройки...\n";
//        }
//        else {
//            cout << "Настройки завершились с ошибкой...\n";
//            return 0;
//        }
//    }
//    void SetVolum() {
//        if (set == 1) {
//            cout << "Настройте звук: "; cin >> volum;
//        }
//        else {
//            cout << "Настройки не открыты: Попробуйте открыть настройки чтобы изменить звук...\n";
//        }
//    }
//    void SetTime() {
//        if (set == 1) {
//            cout << "Настройте время: "; cin >> time;
//        } else {
//            cout << "Настройки не открыты: Попробуйте открыть настройки чтобы изменить время...\n";
//        }
//    }
//    void SetMonLight() {
//        if (set == 1) {
//            cout << "Настройте свечение монитора: "; cin >> monlight;
//        } else {
//            cout << "Настройки не открыты: Попробуйте открыть настройки чтобы изменить свечение монитора...\n";
//        }
//    }
//    void SetTerminal() {
//        cout << "Вы открыли терминал введите команду: "; cin >> terminal;
//    }
//    void GetVolum()  {
//        cout << "Звук равен: " << volum << endl;
//    }
//    void GetTime() {
//        cout << "Время равно: " << time << endl;
//    }
//    void GetMonLight() {
//        cout << "Свечение монитора равно: " << monlight << endl;
//    }
//protected:
//    int set = 0, volum = 0, time = 0, monlight = 0;
//    string terminal = "";
//};
//class Ubuntu final : public Debian {
//public:
//    void SetWallpaper() {
//        if (set == 1) {
//            cout << "Измените обои введите путь к png картинке: "; cin >> wallpaper;
//        }
//    }
//    void GetWallpaper() {
//        cout << "Обои храняться в пути: "; cout << wallpaper << endl;
//    }
//private:
//    string wallpaper = "";
//};

//signed main() {
//    setlocale(LC_ALL, "Russian");

//    Core core; core.Start(); core.End();
//    Debian debian; debian.Start(); debian.Setting(); debian.SetVolum(); debian.SetTime(); debian.SetMonLight(); debian.SetTerminal(); debian.GetVolum(); debian.GetTime(); debian.GetMonLight(); debian.End();
//    Ubuntu ubuntu; ubuntu.Start(); ubuntu.Setting(); ubuntu.SetWallpaper(); ubuntu.End();

//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <locale>

//using namespace std;

//class Computer_On {
//public:
//    Computer_On() {
//        cout << "1\n";
//    }
//    void pc_on() {
//        cout << "PC ON" << endl;
//    }
//};

//class Computer_Off {
//public:
//    Computer_Off() {
//        cout << "2\n";
//    }
//    void pc_off() {
//        cout << "PC OFF" << endl;
//    }
//};

//class Laptop : public Computer_Off, public Computer_On {}; //?

//int main() {
//    setlocale(LC_ALL, "Russian");

//    Laptop Laptop_instance;

//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//void func(int arr[]) {
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << ' ';
//    }
//}

//signed main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    func(arr);

//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//int l = 0, r = N;
//while (r - l > 1) {
//    int mid = (l + r) / 2;
//    if (f(mid) > y) {
//        r = mid;
//    }
//    else { 
//        l = mid;
//    }
//}
//if (f(l) == y) {
//    EST
//}
//else {
//    NET
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <algorithm>

//using namespace std;

//bool f(int x, int n, int x_cek, int y_cek) {
//    if (x < min(x_cek, y_cek)) {
//        if (n > 0) {
//            return false;
//        } else {
//            return true;
//        }
//    }

//    return (1 + (x - min(x_cek, y_cek)) / x_cek + (x - min(x_cek, y_cek)) / y_cek) >= n;
//}

//signed main() {
//    int n, x_cek, y_cek, cnt = 0; cin >> n >> x_cek >> y_cek;
//    int l = 0, r = max(x_cek, y_cek) * n;

//    while (r - l > 1) {
//        int mid = (l + r) / 2;

//        if (f(mid, n, x_cek, y_cek)) {
//            r = mid;
//        } else {
//            l = mid;
//        }
//    }
//    cout << r;

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int n, m; cin >> n >> m;
//    vector<int> arr(n, 0);

//    for (int i = 0; i < m; i++) {
//        int l, r, x; cin >> l >> r >> x;

//        for (int j = l - 1; j < r; j++) {
//            arr[j] += x;
//        }
//    }
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        ans ^= arr[i];
//    }
//    cout << ans;

//   return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//как узнать количество бит в переменной
//bitset<сколько битов надо создать>(переменная);
//#include <iostream>
//#include <bitset>

//using namespace std;

//signed main() {
//    int n = 6;
//    cout << bitset<10>(n);

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int n, m; cin >> n >> m;
//    vector<int> arr(n, 0);

//    for (int i = 0; i < m; i++) {
//        int l, r, x; cin >> l >> r >> x;

//        arr[l] = x; arr[r] += x * (-1);
//        cout << arr[l] << ' ' << arr[r] << endl;
//    }
//    vector<int> arr_res(n, 0);
//    for (int i = 0; i < m; i++) {
//        arr_res[i] += (arr[i]);
//    }

//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        ans ^= arr_res[i];
//    }
//    cout << ans;

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <math.h>

//using namespace std;

//signed main() {
//    double n, m, a; cin >> n >> m >> a;
//    cout << (long long)ceil(n / a) * (long long)ceil(m / a);

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>

//using namespace std;

//signed main(void) {
//    __int8 p__int8[4] = {'A', 'B', 'C'};
//    int pint[4] = {'A', 'B', 'C'};
//    __int64 p__int64[4] = {'A', 'B', 'C'};
//    float pfloat[4] = {'A', 'B', 'C'};
//    double pdouble[4] = {'A', 'B', 'C'};
//    short int pshort[4] = {'A', 'B', 'C'};
//    char pchar[4] = {'A', 'B', 'C'};

//    for (int i = 0; i < 3; i++) {
//        cout << "p__int8" << '[' << i << "] - " << p__int8[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "pint" << '[' << i << "] - " << pint[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "p__int64" << '[' << i << "] - " << p__int64[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "pfloat" << '[' << i << "] - " << pfloat[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "pdouble" << '[' << i << "] - " << pdouble[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "pshort" << '[' << i << "] - " << pshort[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "pchar" << '[' << i << "] - " << pchar[i] << endl;
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>

//using namespace std;

//string str;

//signed main(void) {
//    cin >> str;
//    int cnt = 0, max = 0;
//    bool flag = 0;
    
//    for (int i = 0; i < str.size(); i++) {
//        if (i == 0) {
//            flag = str[i] - '0';
//        }
//        if (str[i] - '0' == flag) {
//            cnt++;
//            flag = str[i] - '0';
//        }
//        if (cnt > max) {
//            max = cnt;
//        }
//        if (str[i] - '0' != flag) {
//            cnt = 0;
//            flag = str[i] - '0';
//        }
//    }
//    if (max + 1 >= 7) {
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }
    
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>

//using namespace std;

//signed main(void) {
//    int n; cin >> n;
//   if (n == 2) {
//        cout << 2;
//    } else {
//        cout << 1;
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>

//using namespace std;

//signed main() {
//    string line;
//    getline(cin, line);
//    vector<int> arr;

//    for (int i = 0; i < line.size(); ) {
//        if (line[i] >= 0) {
//            arr[i] *= 10;
//            arr[i] += line[i] - '0';
//        }
//        if (line[i] == ' ') { i++; }
//    }
//    int x = 0, x_i = 0;
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] == i) {
//            x = arr[i], x_i = i;
//        }
//    }
//    int y = 0, y_i = 0;
//    reverse(arr.begin(), arr.end());
//   for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] == i) {
//            y = arr[i], y_i = i;
//        }
//    }

//    cout << x << endl;
//    reverse(arr.begin(), arr.end());
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] != x_i) {
//            cout << arr[i] << ' ';
//        }
//    }
//    cout << endl << y << endl;
//    reverse(arr.begin(), arr.end());
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] != y_i) {
//            cout << arr[i] << ' ';
//        }
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cstdlib>

//using namespace std;

//signed main() {
//    string line;
//    vector<int> arr; vector<string> arr_string;

//    while (cin >> line) {
//        arr_string.push_back(line);
//    }
//    for (int i = 0; i < arr_string.size(); i++) {
//        arr.push_back(stoi(arr_string[i]));
//    }

//    int x = 0, x_i = 0, y = 0, y_i = 0;
//    for (int i = 0; i < arr.size() - 1; i++) {
//       if (arr[i] == i && arr[i + 1] == arr.size() - arr[i] - 2) {
//            x = arr[i];
//            y = arr[i + 1];
//        }
//    }

//    cout << x << endl;
//    for (int i = 0; i < x; i++) {
//        cout << arr[i] << ' ';
//    }
//    cout << endl << y << endl;
//    for (int i = x + 2; i < arr.size(); i++) {
//        cout << arr[i] << ' ';
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <sstream>

//using namespace std;

//signed main() {
//    string s;
//    getline(cin, s);
//    stringstream mycin(s);
//    vector<long long> arr;
//    long long x;
//    while (mycin >> x) {
//        arr.push_back(x);
//    }

//    string ss;
//    getline(cin, ss);
//    stringstream mycin2(ss);
//    vector<int> carts;
//    int y;
//    while (mycin2 >> y) {
//        carts.push_back(y);
//    }
//    carts.push_back(arr.size());

//    vector<vector<long long>> arr_res(carts.size(), vector<long long>());
//    for (int i = 0, j = 0; i < carts.size(); i++) {
//        while (j < carts[i]) {
//            arr_res[i].push_back(arr[j]);
//            j++;
//        }
//    }
//    reverse(arr_res.begin(), arr_res.end());

//    for (int i = 0; i < carts.size(); i++) {
//        for (int j = 0; j < arr_res[i].size(); j++) {
//            cout << arr_res[i][j] << ' ';
//        }
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int k; cin >> k;
//    vector<int> arr;

//    int buff = 0; // a = 3  k = 12
//    for (int i = 2; i <= k; i++) { // a -- k % a == 0 -> k % (k / a) == 0  --- k = a * (k / a)
//        if (i > 2) {
//            if (k % i == 0) {
//                for (int l = 0; l < arr.size(); l++) {
//                    if (i % arr[l] == 0) {
//                        buff++;
//                    }
//                }
//                if (buff >= 1) {
//                    buff = 0;
//                }
//                else {
//                    arr.push_back(i);
//                }
//            }
//        }
//        if (i == 2) {
//            if (k % i == 0) {
//                arr.push_back(i);
//            }
//        }
//    }

//    cout << arr.size() << endl;
//    for (int i = 0; i < arr.size(); i++) {
//        cout << arr[i] << ' ';
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// x = t ^ 2, sqrt(x) = t
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int k; cin >> k;
//    vector<pair<int, int> > p; // массив пар  {p_i, al_i}

//    for (int i = 2; i * i <= k; i++) { // i < sqrt(k) => i ^ 2 < k
//        if (k % i != 0)
//            continue;
//        int al_i = 0;
//        while (k % i == 0) {
//            k /= i;
//            al_i++;
//        }
//        p.push_back({ i, al_i });
//    }
//    if (k != 1) {
//        p.push_back({ k, 1 });
//    }

//    cout << p.size() << endl;
//    for (int i = 0; i < p.size(); i++) {
//        cout << p[i].first << ' ';
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;
//template <typename T>

//void remove(vector<T>&arr, size_t index) {
//    arr.erase(arr.begin() + index);
//}

//signed main() {
//    int n = 0; cin >> n;
//    bool buff = 0;
//    vector<int> arr = {2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

//    for (int i = 0; i < arr.size(); i++) {
//        if (n == arr[i]) {
//            remove(arr, i);
//            break;
//        }
//    }

//    for (int i = 0; i < arr.size(); i++) {
//        if (n % arr[i] == 0) {
//            buff = true;
//        }
//    }

//    if (buff == false) {
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>

//using namespace std;

//signed main() {
//    long long n = 0; cin >> n;
//    long long stop = sqrt(n);

//    for (long long i = 2; i <= stop; i++) {
//        if (n % i == 0) {
//            cout << "NO";
//            return 0;
//        }

//    }
//    cout << "YES";

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <math.h>

//using namespace std;

//signed main() {
//    int a, b; cin >> a >> b;
//    int q = floor((float)a / (float)b); int r = a - q * b;
//    cout << q << " " << r;

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>

//using namespace std;

//unsigned gcd(unsigned a, unsigned b) {
//    if (b == 0)
//        return a;
//    if (a > b)
//        return gcd(b, a % b);
//    else
//        return gcd(a, b % a);
//}

//signed main() {
//    unsigned a, b;
//    cin >> a >> b;
//    cout << gcd(a, b);
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    int n; cin >> n;
//    vector<int> arr(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr.begin(), arr.end());
//    cout << arr[0] << ' ' << arr[1];

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//str - A B C D E
//count1 - 2 3 5 4 2
//count2 - 2 2 4 4 2
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>

//using namespace std;

//int count1[91], count2[91];
//vector<char> vec;

//void func1() {
//    for (int i = 0; i < 91; i++) {
//        if (count1[i] >= 1 && count1[i] % 2 == 1) {
//            count2[i]--;
//        }
//    }
//}
//void func2() { // ABCCDDE?
//    for (int i = 0; i < 91; i++) {
//        if (count2[i] >= 2) {
//            for (int j = 0; j < count2[i] / 2; j++) {
//                vec.push_back(i);
//                cout << (char)i;
//            }
//        }
//    }
//}
//void func3() {// ABCCDDEB
//    for (int i = 0; i < 91; i++) {
//        if (count1[i] >= 1 && count1[i] % 2 == 1) {
//            cout << (char)i;
//           break;
//        }
//    }
//}

//signed main() {
//    string str; cin >> str;

//    for (int i = 0; i < str.size(); i++) {
//        count1[(int)str[i]] += 1, count2[(int)str[i]] += 1;
//    }

//    func1(); func2(); func3();
//    reverse(vec.begin(), vec.end());

//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i];
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//1
//#include <iostream>

//signed main() {
//    int n; std::cin >> n;

//    if (n <= 3) {
//        std::cout << -1;
//    }
//    else {
//        std::cout << (1 + (n - 2) / 5);
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>

//using namespace std;

//signed main() {
//    int n; cin >> n;
//    vector<int> queue;
//    int head = 0;

//    for (int i = 0; i < n; i++) {
//        char chr; cin >> chr;

//        if (chr == '+') {
//            int it; cin >> it;
//            queue.push_back(it);
//        }
//        if (chr == '-') {
//            cout << queue[head] << endl;
//            head++;
//        }
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    int n; cin >> n;
//    vector<int> arr;
//    vector<int> arr_min;

//    int in1 = 0;
//    int in2 = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> in1;
//        if (in1 == 1) {
//            cin >> in2;
//            arr.push_back(in2);
//            if (arr_min.size() == 0) {
//                arr_min.push_back(in2);
//            }
//            else {
//                if (arr_min.back() > arr.back()) {
//                    arr_min.push_back(arr.back());
//                }
//                else {
//                    arr_min.push_back(arr_min[arr_min.size() - 1]);
//                }
//            }
//        }
//        else if (in1 == 2) {
//            arr.pop_back();
//            arr_min.pop_back();

//        }
//        else if (in1 == 3) {
//            cout << arr_min[arr_min.size() - 1] << endl;
//        }
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <queue>

//using namespace std;

//int n = 0;
//const int STOP = 200000;

//bool win(int card1, int card2) { // возвращает true, если card1 побеждает card2, false иначе
//    // cout << "compare card1=" << card1 << ", card2=" << card2 << endl;
//    if ((card1 > card2 || card1 == 0 && card2 == n - 1) && !(card1 == n - 1 && card2 == 0)) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}

//signed main() {
//    cin >> n;
//    queue<int> arr1, arr2;

//    for (int i = 0; i < n / 2; i++) {
//        int cinn; cin >> cinn;
//        arr1.push(cinn);
//    }
//    for (int i = 0; i < n / 2; i++) {
//        int cinn; cin >> cinn;
//        arr2.push(cinn);
//    }

//    int cnt = 0;
//    while (arr1.size() != 0 && arr2.size() != 0) {
//        // cout << "step=" << cnt << endl;
//        if (win(arr1.front(), arr2.front())) {
//            arr1.push(arr1.front());
//            arr1.push(arr2.front());
//            arr1.pop();
//            arr2.pop();
//        }
//        else {
//            arr2.push(arr1.front());
//            arr2.push(arr2.front());
//            arr2.pop();
//            arr1.pop();
//        }

//        cnt++;
//        if (cnt == STOP) {
//            cout << "draw";
//            return 0;
//        }
//    }

//    if (arr1.size() == 0) {
//        cout << "second " << cnt;
//    }
//    else {
//        cout << "first " << cnt;
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>

//using namespace std;

//signed main() {
//    int n, m, s; cin >> n >> m >> s;
//    vector<int> arr(n), arr_res(n);

//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr.begin(), arr.end());
//    for (int i = 0; i < n; i++) {
//        if (s > arr[i]) {
//            arr_res[i] = 0;
//        }
//        else {
//            int add_cnt = arr[i] / s;
//            int offer_cnt = m / arr[i];
//            arr_res[i] = add_cnt * offer_cnt;
//        }
//    }
//    sort(arr_res.begin(), arr_res.end());
//    cout << arr_res.back();

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Cлияние массивов
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    int n_a, n_b; cin >> n_a >> n_b;
//    vector<int> arr_a(n_a), arr_b(n_b), arr_c;    

//    for (int i = 0; i < n_a; i++) {
//        cin >> arr_a[i];
//    }
//    for (int i = 0; i < n_b; i++) {
//        cin >> arr_b[i];
//    }
//    sort(arr_a.begin(), arr_a.end()); sort(arr_b.begin(), arr_b.end());

//    int ptr_i = 0, ptr_j = 0;
//    while (ptr_i < n_a || ptr_j < n_b) {
//        if (ptr_j == arr_b.size() || ptr_i < arr_a.size() && arr_a[ptr_i] < arr_b[ptr_j]) {
//            arr_c.push_back(arr_a[ptr_i]);
//            ptr_i++;
//        }
//        else {
//            arr_c.push_back(arr_b[ptr_j]);
//            ptr_j++;
//        }
//    }


//    for (int i = 0; i < arr_c.size(); i++) {
//        cout << arr_c[i] << ' ';
//    }
   
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Число меньших
//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//signed main() {
//    int n_a, n_b; cin >> n_a >> n_b;
//    vector<int> arr_a(n_a), arr_b(n_b);

//    for (int i = 0; i < n_a; i++) {
//        cin >> arr_a[i];
//    }
//    for (int i = 0; i < n_b; i++) {
//        cin >> arr_b[i];
//    }
//    sort(arr_a.begin(), arr_a.end()); sort(arr_b.begin(), arr_b.end());

//    vector<int> arr_res;
//    int ptr_i = 0, ptr_j = 0;
//    while (ptr_i < n_a || ptr_j < n_b) {
//        if (ptr_j == arr_b.size() || ptr_i < arr_a.size() && arr_a[ptr_i] < arr_b[ptr_j]) {
//           ptr_i++;
//        }
//        else {
//            arr_res.push_back(ptr_i);
//            ptr_j++;
//        }
//    }

//    for (int i = 0; i < arr_res.size(); i++) {
//        cout << arr_res[i] << ' ';
//    }

//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Число пар равных
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//signed main() {
//    int a, b; cin >> a >> b;
//    vector<int> arr_a(a), arr_b(b);
//    
//    for (int i = 0; i < a; i++) {
//        cin >> arr_a[i];
//    }
//    for (int i = 0; i < b; i++) {
//        cin >> arr_b[i];
//    }
//
//    int ptr_a = 0, ptr_b = 0, cnt = 0;
//    while (ptr_a < a || ptr_b < b) {
//        if (arr_b[ptr_b] == arr_a[ptr_a]) {
//            ptr_a++, cnt++;
//        } else if (arr_b[ptr_b] != arr_a[ptr_a]) {
//            ptr_b++;
//        }
//    }
//    cout << cnt;
//
//    return 0;
//}
// //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Дюбели и сверла
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//signed main() {
//    int a, b; cin >> a >> b;
//    vector<int> arr_a(a), arr_b(b);
//
//    for (int i = 0; i < a; i++) {
//        cin >> arr_a[i];
//    }
//    for (int i = 0; i < b; i++) {
//        cin >> arr_b[i];
//    }
//    sort(arr_a.begin(), arr_a.end()); sort(arr_b.begin(), arr_b.end());
//
//    int ptr_a = 0, ptr_b = 0, ans = 2147483647;
//    while (ptr_a < a && ptr_b < b) {
//        if (abs(arr_b[ptr_b] - arr_a[ptr_a]) < ans) {
//            ans = abs(arr_b[ptr_b] - arr_a[ptr_a]);
//        }
//        if (arr_b[ptr_b] > arr_a[ptr_a]) {
//            ptr_a++;
//        }
//        else {
//            ptr_b++;
//        }
//    }
//    cout << ans;
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//signed main() {
//    int n, delit = 2; cin >> n;
//    vector<string> arr;
//    cout << '[';
//
//    while (delit * delit <= n) {
//        while (n % delit == 0) {
//            arr.push_back(delit);
//            n = n / delit;
//        }
//        delit++;
//    }
//    if (n != 1) {
//        arr.push_back(n);
//    }
//    for (int i = 0; i < arr.size(); i++) {
//        if (i != arr.size() - 1) {
//            cout << arr[i] << ", ";
//        }
//        else {
//            cout << arr[i];
//        }
//    }
//    cout << ']';
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//signed main() {
//    int tests; cin >> tests;
//
//    for (int i = 0; i < tests; i++) {
//        int n, cinn = 0; cin >> n;
//        vector<int> arr0, arr1;
//        for (int j = 0; j < n; j++) {
//            cin >> cinn;
//            if (cinn % 2 == 0) {
//                arr0.push_back(0);
//            } else {
//                arr1.push_back(1);
//            }
//        }
//        if (arr0.size() == 0 && arr1.size() > 0 || arr0.size() > 0 && arr1.size() == 0) {
//            cout << "YES\n";
//        } else {
//            cout << "NO\n";
//        }
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Игра в казино
//Надо сделать что при n = 0 сразу вывести 0 и исправить бесконечный цикл

//#include <iostream>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//signed main() {
//    int t; cin >> t; //Сколько тестов
//    vector<int> res(t); //Вектор с ответом
//
//    for (int i = 0; i < t; i++) {
//        int n, m; cin >> n >> m; //n, m
//        vector<vector<int>> arr(n, vector<int> (m)); //Вектор карт с числами
//
//        for (int cin1 = 0; cin1 < n; cin1++) { //Считываю
//            for (int cin2 = 0; cin2 < m; cin2++) {
//                cin >> arr[cin1][cin2];
//            }
//        }
//        for (int x1 = 0; x1 < n; ) { //Алгоритм
//            int cnt = 0;
//            for (int x2 = 0; x2 < m; x2++) {
//                res[i] += abs(arr[x1][x2] - arr[x1 + 1][x2]); //|a1 − b1| + |a2 − b2|+ ... +|am − bm|
//                if (x1 < t - 2) { //Вот тут еще хрень
//                    x1++;
//                } else { cnt++; break; } //Входит в б.с цикл
//            }
//            if (cnt >= 1) { break; }
//        }
//    }
//    for (int i = 0; i < t; i++) { //Ответ
//        cout << res[i] << endl;
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//signed main() {
//    int n; cin >> n;
//    string codeforsec = "codeforces";
//    vector<string> arr(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++) {
//        int cnt = 0;
//        for (int j = 0; j < 10; j++) {
//            if (arr[i][j] != codeforsec[j]) {
//                cnt++;
//            }
//        }
//        cout << cnt << endl;
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//signed main() {
//    int n; cin >> n;
//
//    while (n--) {
//        int size_arr, max = 0, min = 0; cin >> size_arr;
//        vector<int> arr(size_arr);
//
//        for (int i = 0; i < size_arr; i++) {
//            cin >> arr[i];
//
//            if (arr[i] == 0) {
//                min++;
//            } else if (arr[i] == 1) {
//                if (min > max) {
//                    max = min;
//                }
//                min = 0;
//            }
//        }
//        if (min > max) {
//            max = min;
//        }
//        cout << max << endl;
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//
//using namespace std;
//
//int tests, n, m;
//
//int func(int n, int m) {
//    if (n == m) {
//        return 1;
//    } else if (n % 3 != 0 || m > n) {
//        return 0;
//    } else {
//        return func(n / 3, m) + func(2 * (n / 3), m);
//    }
//}
//
//signed main() {
//	cin >> tests;
//
//    for (int i = 0; i < tests; i++) {
//        cin >> n >> m;
//        if (func(n, m)) {
//            cout << "YES\n";
//        }
//        else {
//            cout << "NO\n";
//        }
//    }
//
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct stru {
//    int a, b, d, i;
//};
//
//signed main() {
//    int n, rost, a = 0, b = 0; cin >> n >> rost;
//    vector<stru> arr_pls, arr_min;
//    vector<int> res;
//
//    for (int i = 1; i < n + 1; ++i) {
//        cin >> a >> b;
//
//        if (b - a > 0) {
//            arr_pls.push_back({ a, b, b - a, i });
//        } else {
//            arr_min.push_back({ a, b, b - a, i });
//        }
//    }
//    sort(arr_pls.begin(), arr_pls.end(), [](const stru &fi, const stru &se) { return fi.a < se.a; });
//    sort(arr_min.begin(), arr_min.end(), [](const stru &fi, const stru &se) { return fi.b > se.b; });
//
//    for (stru s: arr_pls) {
//        if (rost - s.a > 0) {
//            rost -= s.a; rost += s.b;
//            res.push_back(s.i);
//        } else {
//            cout << -1;
//            return 0;
//        }
//    }
//    for (stru s: arr_min) {
//        if (rost - s.a > 0) {
//            rost -= s.a; rost += s.b;
//            res.push_back(s.i);
//        } else {
//            cout << -1;
//            return 0;
//        }
//    }
//
//    for (auto i: res) {
//        cout << i << ' ';
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//signed main() {
//    int n, res = 0; cin >> n;
//
//    while (n--) {
//        string str; cin >> str;
//
//        if (str == "Tetrahedron") {
//            res += 4;
//        } else if (str == "Cube") {
//            res += 6;
//        } else if (str == "Octahedron") {
//            res += 8;
//        } else if (str == "Dodecahedron") {
//            res += 12;
//        } else if (str == "Icosahedron") {
//            res += 20;
//        }
//    }
//    cout << res;
//
//    return 0;
//}