 // Exe 1
    int num1,num2,num3;// 1 2 3 
    cout<<"Enter three numbers? ";
    cin>>num1>>num2>>num3;

    cout<<"The sum is "<<num1+num2+num3<<endl;

    cout<<"The average is "<<(num1+num2+num3)/3<<endl;

    cout<<"The product is "<<num1*num2*num3<<endl;
    
    if (num1>num2 && num1>num3)
        cout<<"The largest is "<<num1<<endl;
    if (num2>num3 && num2>num1)
        cout<<"The largest is "<<num2<<endl;
    if (num3>num2 && num3>num1)
        cout<<"The largest is "<<num3<<endl;
    if (num1<num2 && num1<num3)
        cout<<"The smallest is "<<num1<<endl;
    if (num2<num3 && num2<num1)
        cout<<"The smallest is "<<num2<<endl;
    if (num3<num2 && num3<num1)
        cout<<"The smallest is "<<num3<<endl;