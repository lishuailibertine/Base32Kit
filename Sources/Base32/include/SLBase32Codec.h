//
//  SLBase32Codec.h
//  SLCoinsLib_Example
//
//  Created by li shuai on 2020/4/3.
//  Copyright © 2020 lishuailibertine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SLBase32Codec : NSObject
+(NSData *)dataFromBase32String:(NSString *)base32String;
+(NSString *)base32StringFromData:(NSData *)data;
@end
