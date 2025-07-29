<html>
<head>
    <title>Error Page</title>
</head>
<body>
    <h1>Error Page</h1>
    
    <#if error??>
        <h2>Error: ${error.error!''}</h2>
        <p>Details: ${error.message!''}</p>
    <#else>
        <h2>Unknown error occurred</h2>
    </#if>

</body>
</html>
