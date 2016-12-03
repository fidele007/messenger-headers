/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxSingleMontageViewModel, NSArray, NSDictionary;

@interface MNInboxMontageViewModel : FBValueObject <NSCopying> {

	MNInboxSingleMontageViewModel* _viewerMontage;
	NSArray* _otherMontages;
	NSDictionary* _usersByUserId;
	NSArray* _seenHeads;

}

@property (nonatomic,copy,readonly) MNInboxSingleMontageViewModel * viewerMontage;              //@synthesize viewerMontage=_viewerMontage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherMontages;                                    //@synthesize otherMontages=_otherMontages - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * usersByUserId;                               //@synthesize usersByUserId=_usersByUserId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * seenHeads;                                        //@synthesize seenHeads=_seenHeads - In the implementation block
-(NSDictionary *)usersByUserId;
-(MNInboxSingleMontageViewModel *)viewerMontage;
-(NSArray *)seenHeads;
-(NSArray *)otherMontages;
-(id)initWithViewerMontage:(id)arg1 otherMontages:(id)arg2 usersByUserId:(id)arg3 seenHeads:(id)arg4 ;
@end

