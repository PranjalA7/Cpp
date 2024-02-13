/*
I am creating a func magic
It needs to accept one integer "data"

scenario 1: 
    copy and create duplicated data value to preserve otiginal
    value inside data and yet perform operations on the copy
    inside magic

scenario 2:
    I have "temporary" interger which needs to be passed to magic,
    Magic would perform operations like modifications on the integer
    and return the modified value
    
    2A) pass integer r value reference and returns modified data
*/


/*
    This overload of magic accepts one integer by rvalue
    reference and returns one integer by value
*/
int magic(int&& data){


}
int main(){

    magic(10);
}