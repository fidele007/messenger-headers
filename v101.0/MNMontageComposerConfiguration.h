/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

