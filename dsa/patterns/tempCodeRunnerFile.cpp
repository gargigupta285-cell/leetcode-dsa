
        // After printing stars in a row, move to the next line
        cout << endl;
    }
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern1(n);
    }
    return 0;
}
