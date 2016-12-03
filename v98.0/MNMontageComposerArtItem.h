/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNMontageComposerArtItemView;

@interface MNMontageComposerArtItem : FBValueObject <NSCopying> {

	NSString* _compositionId;
	MNMontageComposerArtItemView* _view;

}

@property (nonatomic,copy,readonly) NSString * compositionId;                         //@synthesize compositionId=_compositionId - In the implementation block
@property (nonatomic,copy,readonly) MNMontageComposerArtItemView * view;              //@synthesize view=_view - In the implementation block
-(id)initWithCompositionId:(id)arg1 view:(id)arg2 ;
-(NSString *)compositionId;
-(MNMontageComposerArtItemView *)view;
@end

