/**
 * Created by Kamil on 2016-02-13.
 */

function showkolumna_web (web, c) {
    document.getElementById(web).style.display = "block";
    document.getElementById(c).style.display = "none";
}

function showkolumna_c (web, c) {
    document.getElementById(web).style.display = "none";
    document.getElementById(c).style.display = "block";
}
function showdane (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "block";
    document.getElementById(dos).style.display = "none";
    document.getElementById(wyk).style.display = "none";
    document.getElementById(umi).style.display = "none";
    document.getElementById(kur).style.display = "none";
    document.getElementById(dod).style.display = "none";
}
function showdos (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "none";
    document.getElementById(dos).style.display = "block";
    document.getElementById(wyk).style.display = "none";
    document.getElementById(umi).style.display = "none";
    document.getElementById(kur).style.display = "none";
    document.getElementById(dod).style.display = "none";
}
function showwyk (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "none";
    document.getElementById(dos).style.display = "none";
    document.getElementById(wyk).style.display = "block";
    document.getElementById(umi).style.display = "none";
    document.getElementById(kur).style.display = "none";
    document.getElementById(dod).style.display = "none";
}
function showumi (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "none";
    document.getElementById(dos).style.display = "none";
    document.getElementById(wyk).style.display = "none";
    document.getElementById(umi).style.display = "block";
    document.getElementById(kur).style.display = "none";
    document.getElementById(dod).style.display = "none";
}
function showkur (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "none";
    document.getElementById(dos).style.display = "none";
    document.getElementById(wyk).style.display = "none";
    document.getElementById(umi).style.display = "none";
    document.getElementById(kur).style.display = "block";
    document.getElementById(dod).style.display = "none";
}
function showdod (dan, dos, wyk, umi, kur, dod) {
    document.getElementById(dan).style.display = "none";
    document.getElementById(dos).style.display = "none";
    document.getElementById(wyk).style.display = "none";
    document.getElementById(umi).style.display = "none";
    document.getElementById(kur).style.display = "none";
    document.getElementById(dod).style.display = "block";
}