//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <ctime>
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