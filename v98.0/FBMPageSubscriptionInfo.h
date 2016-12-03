/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMPageSubscriptionInfo : FBValueObject <NSCoding, NSCopying> {

	BOOL _hasSubscribedPage;
	BOOL _nullStateCTAsAlwaysEnabled;
	BOOL _topicsManagementEnabled;

}

@property (nonatomic,readonly) BOOL hasSubscribedPage;                       //@synthesize hasSubscribedPage=_hasSubscribedPage - In the implementation block
@property (nonatomic,readonly) BOOL nullStateCTAsAlwaysEnabled;              //@synthesize nullStateCTAsAlwaysEnabled=_nullStateCTAsAlwaysEnabled - In the implementation block
@property (nonatomic,readonly) BOOL topicsManagementEnabled;                 //@synthesize topicsManagementEnabled=_topicsManagementEnabled - In the implementation block
-(BOOL)nullStateCTAsAlwaysEnabled;
-(BOOL)hasSubscribedPage;
-(BOOL)topicsManagementEnabled;
-(id)initWithHasSubscribedPage:(BOOL)arg1 nullStateCTAsAlwaysEnabled:(BOOL)arg2 topicsManagementEnabled:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
