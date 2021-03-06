/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMontageComposerPreviewState;

@interface MNMontageComposerState : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNMontageComposerPreviewState* _preview;
	BOOL _broadcast_isSending;

}
+(id)preview:(id)arg1 ;
+(id)broadcastWithIsSending:(BOOL)arg1 ;
+(id)creation;
-(void)matchCreation:(/*^block*/id)arg1 preview:(/*^block*/id)arg2 broadcast:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

