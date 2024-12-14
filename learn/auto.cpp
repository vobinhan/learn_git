#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

/*
    - auto x khi dùng trong range-based for loop thì x đóng vai trò là int
    - auto it = v.begin() thì it đóng vai trò là iterator nên khi truy xuất 
giá trị trong vector bạn cần giải tham chiếu 
 */
void ex_vector()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Duyet vector bang range-based for loop : \n";
    for(auto x : v){
        cout << x << ' ';
    }
    cout << endl;
    cout << "Duyet vector bang iterator : \n";
    for(auto it = v.begin(); it != v.end(); ++it){
    cout << *it << ' ';
   }
}


/*
    - auto x khi duyệt set thì x có kiểu dữ liệu là string
    - auto pos = se.find("28tech") được gán giá trị trả về 
của hàm find nên pos có kiểu là set::iterator 
 */
void ex_set()
{
    set<string> se = {"28tech", "c++", "python", "c++", "java"};
    cout << "Duyet set bang range-based for loop : \n";
    for(auto x : se){
        cout << x << " ";
    }
    cout << endl;
    auto pos = se.find("28tech");
    if(pos == se.end()){
        cout << "NOT FOUND";
    }
    else{
        cout << "FOUND\n";
    }
}


/*
    - auto p thì p có kiểu dữ liệu là pair 
    - auto it = mp.begin() thì it có kiểu dữ liệu là map::iterator 
 */
void ex_map()
{
    map<string, string> mp;
    mp.insert({"28tech", "28tech.com.vn"});
    mp.insert({"Meta", "facebook.com"});
    mp.insert({"X", "twitter.com"});
    cout << "Duyet map bang range-based for loop : \n";
    for(auto p : mp){
       cout << p.first << ' ' << p.second << endl;
    }
    cout << "Duyet map bang iterator : \n";
    for(auto it = mp.begin(); it != mp.end(); ++it){
       cout << it->first << ' ' << it-> second << endl;
    }
}

int main(){

    ex_vector();
    ex_map();
    ex_set();
    return 0;
}