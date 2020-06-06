--[[
    Only comments placed before each 'function' declaration
    are preserved in the generated output files.
    
    Comments are optional.
]]
function GetDimensionLength(dimension="")
    return 0
end

-- Only comments placed before each 'function' declaration
-- are preserved in the generated output files.
function SetDimensionLength(dimension="", length=0.0)
end

--[[
    Some comments for the function SetParentEntity
]]
function SetParentEntity(parent=EntityId(), offset=Vector3(), connected=true)
end


function GetParentOffset(parent=EntityId())
    return Vector3()
end