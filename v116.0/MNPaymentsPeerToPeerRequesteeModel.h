/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsPeerToPeerRequesteeModel : FBValueObject <NSCopying> {

	NSString* _FBID;
	NSString* _requesteeFBID;
	NSString* _shortName;
	NSString* _transferStatus;
	unsigned long long _status;

}

@property (nonatomic,copy,readonly) NSString * FBID;                        //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesteeFBID;               //@synthesize requesteeFBID=_requesteeFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                   //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferStatus;              //@synthesize transferStatus=_transferStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
-(id)initWithFBID:(id)arg1 requesteeFBID:(id)arg2 shortName:(id)arg3 transferStatus:(id)arg4 status:(unsigned long long)arg5 ;
-(NSString *)requesteeFBID;
-(NSString *)transferStatus;
-(NSString *)FBID;
-(unsigned long long)status;
-(NSString *)shortName;
@end

