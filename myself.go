package main

import "fmt"

var p string = `
func main() {
	fmt.Println("package main")
	fmt.Println("import \"fmt\"")
	fmt.Printf("var p string = string([]byte{")
	for i := 0; i < len(p); i++ {
		fmt.Printf("%v", p[i])
		if i < len(p)-1 {
			fmt.Printf(",")
		} else {
			fmt.Printf("})")
		}
	}
	fmt.Printf("%v", p)
}`

func main() {
	fmt.Println("package main")
	fmt.Println("import \"fmt\"")
	fmt.Printf(`var p string = string([]byte{`)
	for i := 0; i < len(p); i++ {
		fmt.Printf("%v", p[i])
		if i < len(p)-1 {
			fmt.Printf(",")
		} else {
			fmt.Printf("})")
		}
	}
	fmt.Printf("%v", p)
}