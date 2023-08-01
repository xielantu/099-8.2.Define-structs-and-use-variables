# 099——8.2.定义结构体和使用变量

<div id="article_content" class="article_content clearfix">
        <link rel="stylesheet" href="https://csdnimg.cn/release/blogv2/dist/mdeditor/css/editerView/kdoc_html_views-1a98987dfd.css">
        <link rel="stylesheet" href="https://csdnimg.cn/release/blogv2/dist/mdeditor/css/editerView/ck_htmledit_views-25cebea3f9.css">
                <div id="content_views" class="markdown_views prism-atom-one-dark">
                    <svg xmlns="http://www.w3.org/2000/svg" style="display: none;">
                        <path stroke-linecap="round" d="M5,0 0,2.5 5,5z" id="raphael-marker-block" style="-webkit-tap-highlight-color: rgba(0, 0, 0, 0);"></path>
                    </svg>
                    <p><strong>在使用IDM软件一段时间后，我们就必须得重新安装付费获取序列号以继续使用IDM，或者呢，使用破解版本的IDM，但有的破解版本有病毒或者下载速度很慢。鉴于此，我们既不想付费，也不想使用破解版。该如何解决呢？？？<br> 废话不多说，我们可以重置IDM试用时间，具体方法如下：</strong></p> 
<p><strong>第一步：</strong><br> <strong>卸载IDM软件。<br> 搜索"程序与功能"，找到IDM后选择完全卸载。</strong></p> 
<p><strong>第二步：</strong><br> <strong>重置注册表信息。</strong><br> <strong>新建一个txt文件，将以下信息复制到txt文件中</strong></p> 
<pre data-index="0" class="prettyprint"><code class="has-numbering" onclick="mdcp.copyCode(event)" style="position: unset;">Windows Registry Editor Version 5.00

[-HKEY_CURRENT_USER\Software\Classes\CLSID\{7B8E9164-324D-4A2E-A46D-0165FB2000EC}]
[-HKEY_CURRENT_USER\Software\Classes\Wow6432Node\CLSID\{7B8E9164-324D-4A2E-A46D-0165FB2000EC}]
[-HKEY_LOCAL_MACHINE\Software\Classes\CLSID\{7B8E9164-324D-4A2E-A46D-0165FB2000EC}]
[-HKEY_LOCAL_MACHINE\Software\Classes\Wow6432Node\CLSID\{7B8E9164-324D-4A2E-A46D-0165FB2000EC}]

[-HKEY_CURRENT_USER\Software\Classes\CLSID\{6DDF00DB-1234-46EC-8356-27E7B2051192}]
[-HKEY_CURRENT_USER\Software\Classes\Wow6432Node\CLSID\{6DDF00DB-1234-46EC-8356-27E7B2051192}]
[-HKEY_LOCAL_MACHINE\Software\Classes\CLSID\{6DDF00DB-1234-46EC-8356-27E7B2051192}]
[-HKEY_LOCAL_MACHINE\Software\Classes\Wow6432Node\CLSID\{6DDF00DB-1234-46EC-8356-27E7B2051192}]

[-HKEY_CURRENT_USER\Software\Classes\CLSID\{D5B91409-A8CA-4973-9A0B-59F713D25671}]
[-HKEY_CURRENT_USER\Software\Classes\Wow6432Node\CLSID\{D5B91409-A8CA-4973-9A0B-59F713D25671}]
[-HKEY_LOCAL_MACHINE\Software\Classes\CLSID\{D5B91409-A8CA-4973-9A0B-59F713D25671}]
[-HKEY_LOCAL_MACHINE\Software\Classes\Wow6432Node\CLSID\{D5B91409-A8CA-4973-9A0B-59F713D25671}]


[-HKEY_CURRENT_USER\Software\Classes\CLSID\{5ED60779-4DE2-4E07-B862-974CA4FF2E9C}]
[-HKEY_CURRENT_USER\Software\Classes\Wow6432Node\CLSID\{5ED60779-4DE2-4E07-B862-974CA4FF2E9C}]
[-HKEY_LOCAL_MACHINE\Software\Classes\CLSID\{5ED60779-4DE2-4E07-B862-974CA4FF2E9C}]
[-HKEY_LOCAL_MACHINE\Software\Classes\Wow6432Node\CLSID\{5ED60779-4DE2-4E07-B862-974CA4FF2E9C}]

[-HKEY_CURRENT_USER\Software\Classes\CLSID\{07999AC3-058B-40BF-984F-69EB1E554CA7}]
[-HKEY_CURRENT_USER\Software\Classes\Wow6432Node\CLSID\{07999AC3-058B-40BF-984F-69EB1E554CA7}]
[-HKEY_LOCAL_MACHINE\Software\Classes\CLSID\{07999AC3-058B-40BF-984F-69EB1E554CA7}]
[-HKEY_LOCAL_MACHINE\Software\Classes\Wow6432Node\CLSID\{07999AC3-058B-40BF-984F-69EB1E554CA7}]


[HKEY_CURRENT_USER\Software\DownloadManager]
"FName"=-
"LName"=-
"Email"=-
"Serial"=-
[HKEY_LOCAL_MACHINE\Software\Internet Download Manager]
"FName"=-
"LName"=-
"Email"=-
"Serial"=-
[HKEY_LOCAL_MACHINE\Software\Wow6432Node\Internet Download Manager]
"FName"=-
"LName"=-
"Email"=-
"Serial"=-


注意！！！最后为一空行，不可以省略。<br> 写完保存为reset.reg文件然后双击，然后重启即可！！！ 
第三步：在官网<a href="http://www.internetdownloadmanager.com/">http://www.internetdownloadmanager.com/</a>下载IDM软件，然后安装成功即可使用，亲测有效！！！
本文借鉴文章链接为：<a href="https://www.cnblogs.com/webkb/p/5249463.html">https://www.cnblogs.com/webkb/p/5249463.html</a></strong></p>
                </div><div><div></div></div>
                <link href="https://csdnimg.cn/release/blogv2/dist/mdeditor/css/editerView/markdown_views-98b95bb57c.css" rel="stylesheet">
                <link href="https://csdnimg.cn/release/blogv2/dist/mdeditor/css/style-c216769e99.css" rel="stylesheet">
       
