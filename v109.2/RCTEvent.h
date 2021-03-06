/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol RCTEvent <NSObject>
@property (nonatomic,readonly) NSNumber * viewTag; 
@property (nonatomic,copy,readonly) NSString * eventName; 
@property (nonatomic,readonly) unsigned short coalescingKey; 
@required
+(id)moduleDotMethod;
-(NSNumber *)viewTag;
-(id)coalesceWithEvent:(id)arg1;
-(unsigned short)coalescingKey;
-(BOOL)canCoalesce;
-(NSString *)eventName;
-(id)arguments;

@end

