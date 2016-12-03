/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNLightweightActionXMAContent : FBValueObject <NSCoding, NSCopying> {

	NSString* _lightweightActionType;
	NSString* _lightweightActionState;

}

@property (nonatomic,copy,readonly) NSString * lightweightActionType;               //@synthesize lightweightActionType=_lightweightActionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionState;              //@synthesize lightweightActionState=_lightweightActionState - In the implementation block
-(NSString *)lightweightActionType;
-(NSString *)lightweightActionState;
-(id)initWithLightweightActionType:(id)arg1 lightweightActionState:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

