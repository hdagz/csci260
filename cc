<head>

</head><script>
function validate(cc){
    alert(cc);
    let result=0;
    let use=0
    for (let i=0;i<cc.length;i++){
        const x=cc[i];
        if(x%2)==0){
            result=result+parseInt(x);
            //even number 

        }
        else{
            y=parseInt(x)*2;// double the number if its odd index
            result=result+parseInt(y);
        }
        
        if(x+1=cc.length){ // if you are at the last number
            if(result%10=0){
                print("valid credit card");

            }
            else{
                print("invalid card");
            }


        }
            if mo
        
    }
    alert(result);
}
</script>

    <body>
        <p>
            <form>
                <input type="text" id="creditcard">
                <button onclick="validate(this.form.creditcard.value)">Greet Me</button>
            </form>
        </p>
    </body>
</head>
