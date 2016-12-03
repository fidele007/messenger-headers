/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface FBPaymentsCheckoutViewConfiguration : FBValueObject <NSCopying> {

	BOOL _isComposerEnabled;
	BOOL _isThemeEnabled;
	BOOL _requiresPin;
	BOOL _shouldShowSuccessIcon;
	NSString* _identifier;
	long long _amountEditMode;
	NSString* _navigationTitle;
	NSString* _rightBarButtonTitle;
	NSString* _confirmationTitleTemplate;
	long long _colorPolicy;
	NSArray* _explanationInfoConfigurations;
	long long _contentMode;
	NSString* _composerPlaceholder;
	NSDictionary* _activatedExtensions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long amountEditMode;                                  //@synthesize amountEditMode=_amountEditMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * navigationTitle;                           //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * rightBarButtonTitle;                       //@synthesize rightBarButtonTitle=_rightBarButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitleTemplate;                 //@synthesize confirmationTitleTemplate=_confirmationTitleTemplate - In the implementation block
@property (nonatomic,readonly) long long colorPolicy;                                     //@synthesize colorPolicy=_colorPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSArray * explanationInfoConfigurations;              //@synthesize explanationInfoConfigurations=_explanationInfoConfigurations - In the implementation block
@property (nonatomic,readonly) long long contentMode;                                     //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) BOOL isComposerEnabled;                                    //@synthesize isComposerEnabled=_isComposerEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerPlaceholder;                       //@synthesize composerPlaceholder=_composerPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL isThemeEnabled;                                       //@synthesize isThemeEnabled=_isThemeEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * activatedExtensions;                   //@synthesize activatedExtensions=_activatedExtensions - In the implementation block
@property (nonatomic,readonly) BOOL requiresPin;                                          //@synthesize requiresPin=_requiresPin - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSuccessIcon;                                //@synthesize shouldShowSuccessIcon=_shouldShowSuccessIcon - In the implementation block
-(BOOL)isThemeEnabled;
-(long long)colorPolicy;
-(long long)amountEditMode;
-(BOOL)isComposerEnabled;
-(NSString *)composerPlaceholder;
-(BOOL)shouldShowSuccessIcon;
-(NSArray *)explanationInfoConfigurations;
-(NSString *)confirmationTitleTemplate;
-(NSDictionary *)activatedExtensions;
-(id)initWithIdentifier:(id)arg1 amountEditMode:(long long)arg2 navigationTitle:(id)arg3 rightBarButtonTitle:(id)arg4 confirmationTitleTemplate:(id)arg5 colorPolicy:(long long)arg6 explanationInfoConfigurations:(id)arg7 contentMode:(long long)arg8 isComposerEnabled:(BOOL)arg9 composerPlaceholder:(id)arg10 isThemeEnabled:(BOOL)arg11 activatedExtensions:(id)arg12 requiresPin:(BOOL)arg13 shouldShowSuccessIcon:(BOOL)arg14 ;
-(BOOL)requiresPin;
-(NSString *)identifier;
-(long long)contentMode;
-(NSString *)navigationTitle;
-(NSString *)rightBarButtonTitle;
@end

