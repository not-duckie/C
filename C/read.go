package main

import "fmt"
import "io/ioutil"
import "os"


func main(){
	data,_ := ioutil.ReadFile(os.Args[1])
	fmt.Println(string(data))

}


