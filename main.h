
const char NoPic[] = R"=====(
  <!DOCTYPE html>
<html class="scroll-smooth" lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <link rel="icon" type="image/x-icon" href="https://upload.wikimedia.org/wikipedia/en/thumb/c/c8/Technological_University_of_the_Philippines_Seal.svg/1200px-Technological_University_of_the_Philippines_Seal.svg.png">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link
        href="https://fonts.googleapis.com/css2?family=Lexend:wght@100;200;300;400;500;600;700;800&family=Poppins:wght@100;200;300;400;500;600;700;800;900&display=swap"
        rel="stylesheet">
    <script src="https://cdn.tailwindcss.com"></script>
    <script defer src="https://unpkg.com/alpinejs@3.x.x/dist/cdn.min.js"></script>
    <title>Group 3</title>
</head>
<style>
    * {
        font-family: 'Poppins',sans-serif;
    }
</style>

<body>
    <header id="head" class="mt-6 flex flex-col items-center">
        <p class="md:text-5xl text-4xl font-bold bg-black text-white p-2 rounded-lg inline-block">ROBOTICS</p>
        <nav class="grid sm:grid-cols-6 grid-cols-3 text-lg font-bold mt-5 sm:gap-10 gap-4 text-center">
            <a class="" href="#kym">Kym</a>
            <a class="" href="#patricia">Patricia</a>
            <a class="" href="#shayne">Shayne</a>
            <a class="" href="#prench">Prench</a>
            <a class="" href="#prench">Ryan</a>
            <a class="" href="#jan">Janriste</a>
        </nav>
    </header>

    <a href="#head">
        <svg class="fixed md:bottom-[60px] md:right-[60px] sm:bottom-[50px] sm:right-[50] bottom-[30px] right-[30px]" xmlns="http://www.w3.org/2000/svg" width="40" height="40"
            fill="currentColor" class="bi bi-arrow-up-square-fill" viewBox="0 0 16 16">
            <path
                d="M2 16a2 2 0 0 1-2-2V2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2zm6.5-4.5V5.707l2.146 2.147a.5.5 0 0 0 .708-.708l-3-3a.5.5 0 0 0-.708 0l-3 3a.5.5 0 1 0 .708.708L7.5 5.707V11.5a.5.5 0 0 0 1 0z" />
        </svg>
    </a>
    <main class="md:px-32 px-3 ">

        <div class="mx-auto mt-14 flex flex-col container flex rounded-lg overflow-hidden">
            <div class="px-4  pb-8 pt-4 text-center">
                <div class="w-[200px] mx-auto h-[200px] rounded-full overflow-hidden">
                    <img class="w-full h object-scale-down" src="https://i.ibb.co/KzwhDV4/sir.jpg" alt="">
                </div>
                <p class="font-bold text-4xl ">Jayson John Quintanilla</p>
                <p class="text-xl mt-1 font-semibold">Instructor</p>
                <p class="mt-3 text-xl">An instructor at the Technological University of the Philippines Visayas. A professional programmer, particularly well-versed in automation and hardware components. A double degree in electrical and computer engineering did exceptionally well in his classes and spent years putting forth an effort to learn to program.
                </p>
            </div>
        </div>
        <section class="container mx-auto mt-16 ">
            <div id="kym" class="grid md:grid-cols-3 sm:grid-cols-2 grid-cols-1 gap-10">
                <div class="flex flex-col md:flex-row-reverse text-center md:text-start overflow-hidden rounded-lg md:space-x-7  md:space-x-10 hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg">
                    <div clasq="overflow-hidden">
                        <div class="w-full  h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fmnl8-2.fna.fbcdn.net/v/t1.6435-9/87369093_1513238808827102_700636799520735232_n.jpg?_nc_cat=110&ccb=1-7&_nc_sid=174925&_nc_eui2=AeHIVnY1CUu7xaOLpBt7OU3-2bYFRDfosLTZtgVEN-iwtBplZ_gz2w2Faz0_hKv2CSo4HfnspbnEzgbig2Z1t67I&_nc_ohc=7MdEUZVdu98AX9lIEZ-&_nc_ht=scontent.fmnl8-2.fna&oh=00_AfCVJ1igrGSxu-FLptEHwHCDjKYWg0Or23_r2y0fEu31mg&oe=63F6C72D" alt="">
                        </div>
                        <div class="px-4 py-5">
                            <p class="font-bold text-3xl">Kym Alcansado Ape</p>
                            <p class="text-xl font-semibold">Programmer</p>
                            <p class="mt-3 text-lg"> 21 years old. A fullstack programmer, web content developer and PHP enthusiast. Dedicated himself to technology-related environment since 2020. </p>
                            <div class=" mt-4 flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class=" font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex  space-x-3 mt-3 duration-600  mt-4 md:mt-0 ">
    
                                    <a href="www.facebook.com/KymAlcansadoApe" target="_blank">
                                        <svg class="text-blue-800 hover:w-[30px]" xmlns="http://www.w3.org/2000/svg"
                                            width="30" height="30" fill="currentColor" class="bi bi-facebook"
                                            viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="www.instagram.com/KymAlcansadoApe" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                    <a href="www.github.com/kymalcansadoape" target="_blank">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
                                            class="bi bi-github" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.012 8.012 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
                                        </svg>
                                    </a>
                                    <a class="text-[rgb(10,102,194)]" href="https://www.linkedin.com/in/kym-ape-a9697521a/">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor" class="bi bi-linkedin" viewBox="0 0 16 16">
                                            <path d="M0 1.146C0 .513.526 0 1.175 0h13.65C15.474 0 16 .513 16 1.146v13.708c0 .633-.526 1.146-1.175 1.146H1.175C.526 16 0 15.487 0 14.854V1.146zm4.943 12.248V6.169H2.542v7.225h2.401zm-1.2-8.212c.837 0 1.358-.554 1.358-1.248-.015-.709-.52-1.248-1.342-1.248-.822 0-1.359.54-1.359 1.248 0 .694.521 1.248 1.327 1.248h.016zm4.908 8.212V9.359c0-.216.016-.432.08-.586.173-.431.568-.878 1.232-.878.869 0 1.216.662 1.216 1.634v3.865h2.401V9.25c0-2.22-1.184-3.252-2.764-3.252-1.274 0-1.845.7-2.165 1.193v.025h-.016a5.54 5.54 0 0 1 .016-.025V6.169h-2.4c.03.678 0 7.225 0 7.225h2.4z"/>
                                        </svg>
                                    </a>
                                    <a class="text-blue-500" href="https://kymalcansadoape.vercel.app/" target="_blank">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
                                            class="bi bi-globe" viewBox="0 0 16 16">
                                            <path
                                                d="M0 8a8 8 0 1 1 16 0A8 8 0 0 1 0 8zm7.5-6.923c-.67.204-1.335.82-1.887 1.855A7.97 7.97 0 0 0 5.145 4H7.5V1.077zM4.09 4a9.267 9.267 0 0 1 .64-1.539 6.7 6.7 0 0 1 .597-.933A7.025 7.025 0 0 0 2.255 4H4.09zm-.582 3.5c.03-.877.138-1.718.312-2.5H1.674a6.958 6.958 0 0 0-.656 2.5h2.49zM4.847 5a12.5 12.5 0 0 0-.338 2.5H7.5V5H4.847zM8.5 5v2.5h2.99a12.495 12.495 0 0 0-.337-2.5H8.5zM4.51 8.5a12.5 12.5 0 0 0 .337 2.5H7.5V8.5H4.51zm3.99 0V11h2.653c.187-.765.306-1.608.338-2.5H8.5zM5.145 12c.138.386.295.744.468 1.068.552 1.035 1.218 1.65 1.887 1.855V12H5.145zm.182 2.472a6.696 6.696 0 0 1-.597-.933A9.268 9.268 0 0 1 4.09 12H2.255a7.024 7.024 0 0 0 3.072 2.472zM3.82 11a13.652 13.652 0 0 1-.312-2.5h-2.49c.062.89.291 1.733.656 2.5H3.82zm6.853 3.472A7.024 7.024 0 0 0 13.745 12H11.91a9.27 9.27 0 0 1-.64 1.539 6.688 6.688 0 0 1-.597.933zM8.5 12v2.923c.67-.204 1.335-.82 1.887-1.855.173-.324.33-.682.468-1.068H8.5zm3.68-1h2.146c.365-.767.594-1.61.656-2.5h-2.49a13.65 13.65 0 0 1-.312 2.5zm2.802-3.5a6.959 6.959 0 0 0-.656-2.5H12.18c.174.782.282 1.623.312 2.5h2.49zM11.27 2.461c.247.464.462.98.64 1.539h1.835a7.024 7.024 0 0 0-3.072-2.472c.218.284.418.598.597.933zM10.855 4a7.966 7.966 0 0 0-.468-1.068C9.835 1.897 9.17 1.282 8.5 1.077V4h2.355z" />
                                        </svg>
                                    </a>
                                </div>
                        </div>
                        </div>
                    </div>
                </div>

                <div id="patricia"
                    class="flex flex-col md:flex-row-reverse text-center md:text-start overflow-hidden rounded-lg items-center space-y-7 md:space-x-7  md:space-x-10 hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg">
                
                    <div class="flex flex-col">
                        <div class="w-full h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fmnl8-2.fna.fbcdn.net/v/t39.30808-6/319637708_2397304387100225_8023946848597982668_n.jpg?_nc_cat=111&ccb=1-7&_nc_sid=8bfeb9&_nc_eui2=AeEvEMBPfzVUDkdjxL7gfduFp7a2wKNN6f6ntrbAo03p_nmfygU3Rtk0zsiZ3pf_0a9V1IJwKO0Tbu2k2ij3wT5B&_nc_ohc=Qn64kJ78iZ0AX9XBZAS&_nc_ht=scontent.fmnl8-2.fna&oh=00_AfCqLMnwYoQEu0h9K08AcZ4_oauVEKyoNLxL32OB7IataQ&oe=63D3F5E3" alt="">
                        </div>
                        <div class="px-4 py-5">
                            <p class="font-bold text-4xl">Patricia Marie Embang</p>
                            <p class="text-xl font-semibold mt-1">Writer and Statistician</p>
                            <p class="mt-3 text-lg">21 years old. A User Interface and Design enthusiast, front-end developer and Database-enabled informations.  </p>
                            <div class="flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class="mt-4 font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex space-x-3 mt-3 duration-600">
    
                                    <a href="https://www.facebook.com/TrishaMarie.Kim?mibextid=ZbWKwL" target="_blank">
                                        <svg class="text-blue-800" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-facebook" viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="www.instagram.com/KymAlcansadoApe" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <div id="shayne"
                class="flex flex-col md:flex-row-reverse text-center md:text-start overflow-hidden md:space-x-7  md:space-x-10 rounded-lg hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg">

                    <div class="flex flex-col">
                        <div class="w-full h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fmnl8-2.fna.fbcdn.net/v/t39.30808-6/275383503_2822809214680431_5854824124768640572_n.jpg?_nc_cat=110&ccb=1-7&_nc_sid=174925&_nc_eui2=AeGuNqJ3z3cZIWME42HXDFCaEd6i4WVk8dYR3qLhZWTx1mf9kOXa748kBaJJcJY-YEtgR0WeoItWmMz1FUaRFA_k&_nc_ohc=7JPw_FGBE5AAX8SNrFh&tn=n_qFFHTx-EwTbPzP&_nc_ht=scontent.fmnl8-2.fna&oh=00_AfDLbZBNMNVMv-9N5eZtPIHaXQYnsvzGJcxhvPN_uRV2sA&oe=63D4C516" alt="">
                        </div>
                        <div class="px-4 py-5">
                            <p class="font-bold text-4xl">Shayne Exequiel</p>
                            <p class="text-xl font-semibold mt-1">Main Writer and Statistician</p>
                            <p class="mt-3 text-lg">20 years old. A front-end developer, database designer and hardware enthusiast.</p>
                            <div class="flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class="mt-4 font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex space-x-3 mt-3 duration-600">
    
                                    <a href="https://www.facebook.com/shayne.exequiel?mibextid=ZbWKwL" target="_blank">
                                        <svg class="text-blue-800" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-facebook" viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="https://www.instagram.com/itssheng_keyla/?hl=en" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                    <a class="text-[rgb(10,102,194)]" href="https://www.linkedin.com/in/shayne-exequiel-b0a551225/">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor" class="bi bi-linkedin" viewBox="0 0 16 16">
                                            <path d="M0 1.146C0 .513.526 0 1.175 0h13.65C15.474 0 16 .513 16 1.146v13.708c0 .633-.526 1.146-1.175 1.146H1.175C.526 16 0 15.487 0 14.854V1.146zm4.943 12.248V6.169H2.542v7.225h2.401zm-1.2-8.212c.837 0 1.358-.554 1.358-1.248-.015-.709-.52-1.248-1.342-1.248-.822 0-1.359.54-1.359 1.248 0 .694.521 1.248 1.327 1.248h.016zm4.908 8.212V9.359c0-.216.016-.432.08-.586.173-.431.568-.878 1.232-.878.869 0 1.216.662 1.216 1.634v3.865h2.401V9.25c0-2.22-1.184-3.252-2.764-3.252-1.274 0-1.845.7-2.165 1.193v.025h-.016a5.54 5.54 0 0 1 .016-.025V6.169h-2.4c.03.678 0 7.225 0 7.225h2.4z"/>
                                          </svg>
                                    </a>
                                    <a href="https://github.com/shayneexe01" target="_blank">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
                                            class="bi bi-github" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.012 8.012 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
                                        </svg>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <div id="prench"
                    class="flex flex-col md:flex-row-reverse  md:text-start overflow-hidden space-y-7 md:space-x-7  md:space-x-10 hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg">

                    <div class="flex flex-col">
                        <div class="w-full h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fceb2-2.fna.fbcdn.net/v/t39.30808-6/318184421_1057069919023142_248428446493311687_n.jpg?_nc_cat=104&ccb=1-7&_nc_sid=174925&_nc_eui2=AeEJfGzw_DP2S4_stxeJS8P3JT3kI5z4l9QlPeQjnPiX1Gcpr0ZW_w1w5cDOxsH06ZbmdoQ7vjEGMyJe74km1AIk&_nc_ohc=upIkt-GAoB0AX_k3Gfu&tn=ksFtGcIcw9hqZFgY&_nc_ht=scontent.fceb2-2.fna&oh=00_AfB70hnY6usVtV2c4uYwaecj15XP6NwoM5Gqb-tjg3fvHg&oe=63D3E637" alt="">
                        </div>
                        <div class="px-4 py-5">
                            <p class="font-bold text-4xl">Prench Joseph Infante</p>
                            <p class="text-xl font-semibold mt-1">Hardware Designer</p>
                            <p class="mt-3 text-lg">21 years old. Well-founded in User Interface and Design, as well as, Hardware components.</p>
                            <div class="flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class="mt-4 font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex space-x-3 mt-3 duration-600">
    
                                    <a href="www.facebook.com/prench.infante" target="_blank">
                                        <svg class="text-blue-800" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-facebook" viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="www.instagram.com/KymAlcansadoApe" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                    <a href="https://github.com/prenxia" target="_blank">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
                                            class="bi bi-github" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.012 8.012 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
                                        </svg>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <div id="ryan"
                    class="md:flex  text-center md:text-start md:space-x-7 hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg overflow-hidden ">
                    <div class="flex flex-col">
                        <div class="w-full h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fmnl8-1.fna.fbcdn.net/v/t39.30808-6/273400438_1944560599037122_1098262023934283137_n.jpg?_nc_cat=107&ccb=1-7&_nc_sid=09cbfe&_nc_eui2=AeEf9-LPphXB4-OddIaVGJeAJHbNOCbHrwgkds04JsevCHKPIey0uaisFojqgJzRLOJlXF3I6_O512k_smDpQpj_&_nc_ohc=uuPMnt1pgJkAX846wJj&_nc_ht=scontent.fmnl8-1.fna&oh=00_AfAJH_QzyiWVpQt5hDruofL6SlhAEu9GKIsZOW5cCx06dA&oe=63D522D4" alt="">
                        </div>
                        <div class="px-4 py-5">
                            <p class="font-bold text-4xl">Ryan Villarma</p>
                            <p class="text-xl font-semibold mt-1">Programmer</p>
                            <p class="mt-3 text-lg">21 years old. A fullstack programmer, well-versed in C++, arduino and PHP enthusiast. </p>
                            <div class="flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class="mt-4 font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex space-x-3 mt-3 duration-600">
    
                                    <a href="www.facebook.com/duhell08" target="_blank">
                                        <svg class="text-blue-800" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-facebook" viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="www.instagram.com/KymAlcansadoApe" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                    <a href="https://github.com/Duhell" target="_blank">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
                                            class="bi bi-github" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.012 8.012 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
                                        </svg>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <div id="jan"
                    class="flex flex-col md:flex-row-reverse text-center md:text-start space-y-7 md:space-x-7  md:space-x-10  hover:shadow-[0_35px_60px_6px_rgba(120,120,120,0.2)] transition duration-600 rounded-lg overflow-hidden">
                    <div class="flex flex-col">
                        <div class="w-full h-[340px]">
                            <img class="w-full h-full object-cover" src="https://scontent.fceb2-2.fna.fbcdn.net/v/t39.30808-6/316664608_3309338792638614_8580428741292370553_n.jpg?stp=cp6_dst-jpg&_nc_cat=100&ccb=1-7&_nc_sid=8bfeb9&_nc_eui2=AeH4NIHP1IaEEOvZv0efuoWvgnCnNIVl8PiCcKc0hWXw-F5XabFKF0Yt4V5uSS_tL2dneqXEnysNDBPa1P09UWss&_nc_ohc=X0HTEG-bD9YAX91rkdt&tn=n_qFFHTx-EwTbPzP&_nc_ht=scontent.fceb2-2.fna&oh=00_AfAA67IEq6hBrmYU8vLnP-RNusBzUtIvzb_3KBvfogb9Wg&oe=63D49840" alt="">
                        </div>

                        <div class="px-4 py-5">
                            <p class="font-bold text-4xl">Janriste Villasor</p>
                            <p class="text-xl font-semibold mt-1">Hardware Designer</p>
                            <p class="mt-3 text-lg">20 years old. Lay-out and hardware design enthusiast. A program holder in Computer System Servicing.  </p>
                            <div class="flex md:flex-row flex-col items-center space-x-5" x-data="{open: false}">
                                <button @click="open = !open "
                                    class="mt-4 font-bold outline hover:bg-black hover:text-white transition duration-400 outline-1 outline-black px-4 py-2 rounded-md inline-block">
                                    Socials
                                </button>
                                <div x-transition x-show="open" class="flex space-x-3 mt-3 duration-600">
    
                                    <a href="www.facebook.com/janriste.villasor" target="_blank">
                                        <svg class="text-blue-800" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-facebook" viewBox="0 0 16 16">
                                            <path
                                                d="M16 8.049c0-4.446-3.582-8.05-8-8.05C3.58 0-.002 3.603-.002 8.05c0 4.017 2.926 7.347 6.75 7.951v-5.625h-2.03V8.05H6.75V6.275c0-2.017 1.195-3.131 3.022-3.131.876 0 1.791.157 1.791.157v1.98h-1.009c-.993 0-1.303.621-1.303 1.258v1.51h2.218l-.354 2.326H9.25V16c3.824-.604 6.75-3.934 6.75-7.951z" />
                                        </svg>
                                    </a>
                                    <a href="https://instagram.com/janvill.30?igshid=YmMyMTA2M2Y=" target="_blank">
                                        <svg class="text-red-500" xmlns="http://www.w3.org/2000/svg" width="30" height="30"
                                            fill="currentColor" class="bi bi-instagram" viewBox="0 0 16 16">
                                            <path
                                                d="M8 0C5.829 0 5.556.01 4.703.048 3.85.088 3.269.222 2.76.42a3.917 3.917 0 0 0-1.417.923A3.927 3.927 0 0 0 .42 2.76C.222 3.268.087 3.85.048 4.7.01 5.555 0 5.827 0 8.001c0 2.172.01 2.444.048 3.297.04.852.174 1.433.372 1.942.205.526.478.972.923 1.417.444.445.89.719 1.416.923.51.198 1.09.333 1.942.372C5.555 15.99 5.827 16 8 16s2.444-.01 3.298-.048c.851-.04 1.434-.174 1.943-.372a3.916 3.916 0 0 0 1.416-.923c.445-.445.718-.891.923-1.417.197-.509.332-1.09.372-1.942C15.99 10.445 16 10.173 16 8s-.01-2.445-.048-3.299c-.04-.851-.175-1.433-.372-1.941a3.926 3.926 0 0 0-.923-1.417A3.911 3.911 0 0 0 13.24.42c-.51-.198-1.092-.333-1.943-.372C10.443.01 10.172 0 7.998 0h.003zm-.717 1.442h.718c2.136 0 2.389.007 3.232.046.78.035 1.204.166 1.486.275.373.145.64.319.92.599.28.28.453.546.598.92.11.281.24.705.275 1.485.039.843.047 1.096.047 3.231s-.008 2.389-.047 3.232c-.035.78-.166 1.203-.275 1.485a2.47 2.47 0 0 1-.599.919c-.28.28-.546.453-.92.598-.28.11-.704.24-1.485.276-.843.038-1.096.047-3.232.047s-2.39-.009-3.233-.047c-.78-.036-1.203-.166-1.485-.276a2.478 2.478 0 0 1-.92-.598 2.48 2.48 0 0 1-.6-.92c-.109-.281-.24-.705-.275-1.485-.038-.843-.046-1.096-.046-3.233 0-2.136.008-2.388.046-3.231.036-.78.166-1.204.276-1.486.145-.373.319-.64.599-.92.28-.28.546-.453.92-.598.282-.11.705-.24 1.485-.276.738-.034 1.024-.044 2.515-.045v.002zm4.988 1.328a.96.96 0 1 0 0 1.92.96.96 0 0 0 0-1.92zm-4.27 1.122a4.109 4.109 0 1 0 0 8.217 4.109 4.109 0 0 0 0-8.217zm0 1.441a2.667 2.667 0 1 1 0 5.334 2.667 2.667 0 0 1 0-5.334z" />
                                        </svg>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </section>
    </main>

    <footer class="container mx-auto py-9 mt-20 text-center">
        <p class="text-lg">Copyright &#169; 2023 <span class="font-bold">Group 3</span> All Rights Reserve</p>
    </footer>
</body>

</html>
)=====";