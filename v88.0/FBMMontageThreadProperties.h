/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMMontageAudience, FBMMontageThreadPropertiesFetchStatus;

@interface FBMMontageThreadProperties : FBValueObject <NSCoding, NSCopying> {

	NSString* _fbId;
	NSString* _montageAuthorFbId;
	FBMMontageAudience* _montageAudience;
	FBMMontageThreadPropertiesFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * fbId;                                                  //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageAuthorFbId;                                     //@synthesize montageAuthorFbId=_montageAuthorFbId - In the implementation block
@property (nonatomic,copy,readonly) FBMMontageAudience * montageAudience;                             //@synthesize montageAudience=_montageAudience - In the implementation block
@property (nonatomic,copy,readonly) FBMMontageThreadPropertiesFetchStatus * fetchStatus;              //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(NSString *)fbId;
-(FBMMontageThreadPropertiesFetchStatus *)fetchStatus;
-(NSString *)montageAuthorFbId;
-(FBMMontageAudience *)montageAudience;
-(id)initWithFbId:(id)arg1 montageAuthorFbId:(id)arg2 montageAudience:(id)arg3 fetchStatus:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

