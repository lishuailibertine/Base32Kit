//
//  File.swift
//  
//
//  Created by li shuai on 2022/6/14.
//

import Foundation
import Base32

public class SLBase32{
    static public func dataFromBase32String(encoding:String) -> Data{
        return SLBase32Codec.data(fromBase32String: encoding)
    }
    static public func base32StringFromData(data:Data) -> String{
        return SLBase32Codec.base32String(from: data)
    }
}
