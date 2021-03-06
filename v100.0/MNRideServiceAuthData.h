/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServiceAuthData : FBValueObject <NSCopying> {

	BOOL _hasAuthorized;
	NSString* _authorizationUrlString;
	NSString* _redirectUrlString;

}

@property (nonatomic,readonly) BOOL hasAuthorized;                                  //@synthesize hasAuthorized=_hasAuthorized - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorizationUrlString;              //@synthesize authorizationUrlString=_authorizationUrlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * redirectUrlString;                   //@synthesize redirectUrlString=_redirectUrlString - In the implementation block
-(BOOL)hasAuthorized;
-(id)initWithHasAuthorized:(BOOL)arg1 authorizationUrlString:(id)arg2 redirectUrlString:(id)arg3 ;
-(NSString *)authorizationUrlString;
-(NSString *)redirectUrlString;
@end

