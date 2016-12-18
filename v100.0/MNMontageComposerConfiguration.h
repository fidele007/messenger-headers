/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNMontageComposerDefaultState;

@interface MNMontageComposerConfiguration : FBValueObject <NSCopying> {

	BOOL _applyVideoEditsWhenTranscoding;
	NSString* _applicationName;
	NSString* _mediaSendSourcePrefix;
	MNMontageComposerDefaultState* _originalComposerDefaultState;

}

@property (nonatomic,copy,readonly) NSString * applicationName;                                                //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSendSourcePrefix;                                          //@synthesize mediaSendSourcePrefix=_mediaSendSourcePrefix - In the implementation block
@property (nonatomic,copy,readonly) MNMontageComposerDefaultState * originalComposerDefaultState;              //@synthesize originalComposerDefaultState=_originalComposerDefaultState - In the implementation block
@property (nonatomic,readonly) BOOL applyVideoEditsWhenTranscoding;                                            //@synthesize applyVideoEditsWhenTranscoding=_applyVideoEditsWhenTranscoding - In the implementation block
-(id)initWithApplicationName:(id)arg1 mediaSendSourcePrefix:(id)arg2 originalComposerDefaultState:(id)arg3 applyVideoEditsWhenTranscoding:(BOOL)arg4 ;
-(NSString *)mediaSendSourcePrefix;
-(MNMontageComposerDefaultState *)originalComposerDefaultState;
-(BOOL)applyVideoEditsWhenTranscoding;
-(NSString *)applicationName;
@end
