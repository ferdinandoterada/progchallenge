#include<iostream>

using namespace std; 

int main()
{
    for( auto count = 1; count <= 100; ++count){
        if( count % 3 == 0 ) cout << "Foo" << endl;
        else if ( count % 5 == 0 ) cout << "Baa" << endl;
        else if ( count % 5 == 0 and count % 3 == 0) cout << "FooBaa" << endl;
        else cout << count << endl;
    }
}
