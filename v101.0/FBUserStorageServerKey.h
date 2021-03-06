/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription;

@interface FBUserStorageServerKey : FBValueObject <NSCopying> {

	FBStringWithRedactedDescription* _currentServerKey;
	FBStringWithRedactedDescription* _previousServerKey;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * currentServerKey;               //@synthesize currentServerKey=_currentServerKey - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * previousServerKey;              //@synthesize previousServerKey=_previousServerKey - In the implementation block
-(FBStringWithRedactedDescription *)currentServerKey;
-(FBStringWithRedactedDescription *)previousServerKey;
-(id)initWithCurrentServerKey:(id)arg1 previousServerKey:(id)arg2 ;
@end

