package main

import "fmt"

var p = `
func main() {
	fmt.Println("package main\nimport \"fmt\"\nvar p = string([]byte{")
	for i := 0; i < len(p); i++ {
		fmt.Printf("%v,", p[i])
	}
	fmt.Printf("})")
	fmt.Printf("%v", p)
}`

func main() {
	fmt.Println("package main\nimport \"fmt\"\nvar p = string([]byte{")
	for i := 0; i < len(p); i++ {
		fmt.Printf("%v,", p[i])
	}
	fmt.Printf("})")
	fmt.Printf("%v", p)
}
