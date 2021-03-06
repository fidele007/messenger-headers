/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMLocalThreadKey, MNThreadReadMark, FBMIndexedUserSet;

@interface MNThreadCreationStateConfiguration : FBValueObject <NSCopying> {

	BOOL _canReply;
	BOOL _isMuted;
	FBMLocalThreadKey* _localThreadKey;
	MNThreadReadMark* _readMark;
	FBMIndexedUserSet* _indexedUserSet;

}

@property (nonatomic,copy,readonly) FBMLocalThreadKey * localThreadKey;              //@synthesize localThreadKey=_localThreadKey - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * readMark;                     //@synthesize readMark=_readMark - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedUserSet * indexedUserSet;              //@synthesize indexedUserSet=_indexedUserSet - In the implementation block
@property (nonatomic,readonly) BOOL canReply;                                        //@synthesize canReply=_canReply - In the implementation block
@property (nonatomic,readonly) BOOL isMuted;                                         //@synthesize isMuted=_isMuted - In the implementation block
-(FBMLocalThreadKey *)localThreadKey;
-(FBMIndexedUserSet *)indexedUserSet;
-(MNThreadReadMark *)readMark;
-(id)initWithLocalThreadKey:(id)arg1 readMark:(id)arg2 indexedUserSet:(id)arg3 canReply:(BOOL)arg4 isMuted:(BOOL)arg5 ;
-(BOOL)canReply;
-(BOOL)isMuted;
@end

