f(m==1 || n==1)
            cout<<"YES\n";

        else{
            bool flag = false;

            for(int i=0 ; i<n-1 ; i++)
                for(int j=0 ; j<m-1 ; j++)
                    if(a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1] == 3){
                        flag = true; break;
                    }
            flag ? cout<<"NO\n" : cout<<"YES\n";
        }