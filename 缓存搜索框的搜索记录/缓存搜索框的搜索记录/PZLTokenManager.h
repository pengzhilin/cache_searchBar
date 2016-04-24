//
//  PZLTokenManager.h
//  缓存搜索框的搜索记录
//
//  Created by pengzhilin on 16/4/24.
//  Copyright © 2016年 pengzhilin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PZLTokenManager : NSObject

//缓存搜索的数组
+(void)SearchText :(NSString *)seaTxt;
//清除缓存数组
+(void)removeAllArray;

@end
