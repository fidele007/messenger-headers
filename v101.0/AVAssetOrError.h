/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAsset, NSError;

@interface AVAssetOrError : NSObject {

	AVAsset* _value;
	NSError* _error;

}

@property (nonatomic,readonly) AVAsset * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)newWithError:(id)arg1 ;
+(id)newWithValue:(id)arg1 orError:(id)arg2 ;
+(id)newWithValue:(id)arg1 ;
-(AVAsset *)value;
-(NSError *)error;
@end
