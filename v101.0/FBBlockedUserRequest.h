/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBBlockedUserRequest : FBNetworkerRequest {

	NSString* _blockerID;
	NSString* _FBID;

}

@property (nonatomic,copy) NSString * FBID;              //@synthesize FBID=_FBID - In the implementation block
-(NSString *)FBID;
-(id)networkRequest;
-(id)initWithFBID:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)initWithBlockeeID:(id)arg1 blockerID:(id)arg2 callbackPerformer:(id)arg3 ;
-(void)setFBID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)httpMethod;
@end
