/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id readBlock; 
@property (nonatomic,copy,readonly) id writeBlock; 
@property (nonatomic,readonly) double threshold; 
+(id)propertyWithName:(id)arg1 ;
+(id)propertyWithName:(id)arg1 initializer:(/*^block*/id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

