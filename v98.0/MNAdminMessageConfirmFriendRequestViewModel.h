/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNAdminMessageConfirmFriendRequestViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowStickerCollectionView;
	NSString* _loggedInUserId;
	NSString* _otherUserIdOnCanonicalThread;
	NSString* _adminMessage;
	NSArray* _stickerFbIds;
	long long _actionButtonType;

}

@property (nonatomic,copy,readonly) NSString * loggedInUserId;                            //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserIdOnCanonicalThread;              //@synthesize otherUserIdOnCanonicalThread=_otherUserIdOnCanonicalThread - In the implementation block
@property (nonatomic,copy,readonly) NSString * adminMessage;                              //@synthesize adminMessage=_adminMessage - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowStickerCollectionView;                      //@synthesize shouldShowStickerCollectionView=_shouldShowStickerCollectionView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickerFbIds;                               //@synthesize stickerFbIds=_stickerFbIds - In the implementation block
@property (nonatomic,readonly) long long actionButtonType;                                //@synthesize actionButtonType=_actionButtonType - In the implementation block
-(long long)actionButtonType;
-(NSString *)otherUserIdOnCanonicalThread;
-(id)initWithLoggedInUserId:(id)arg1 otherUserIdOnCanonicalThread:(id)arg2 adminMessage:(id)arg3 shouldShowStickerCollectionView:(BOOL)arg4 stickerFbIds:(id)arg5 actionButtonType:(long long)arg6 ;
-(NSString *)loggedInUserId;
-(NSString *)adminMessage;
-(BOOL)shouldShowStickerCollectionView;
-(NSArray *)stickerFbIds;
@end

