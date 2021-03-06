/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerControlExtensionProviding.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNComposerControlExtensionProvidingDelegate;
@class MNComposerEphemeralControlExtension, NSString;

@interface MNSecureThreadComposerControlExtensionProvider : NSObject <MNComposerControlExtensionProviding, FBClassProvidable> {

	MNComposerEphemeralControlExtension* _ephemeralControlExtension;
	id<MNComposerControlExtensionProvidingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerControlExtensionProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)topPriComposerControlExtension;
-(void)setDelegate:(id<MNComposerControlExtensionProvidingDelegate>)arg1 ;
-(id<MNComposerControlExtensionProvidingDelegate>)delegate;
@end

