 vector <int> array(number_of_elements);
 
 for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
}

In C++11 you can write:
for (auto& it : s) {
    cout << it << endl;
}
