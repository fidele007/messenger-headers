/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSURL;

@interface MNBusinessSignupViewModel : FBValueObject <NSCopying> {

	NSArray* _rows;
	NSString* _titleText;
	NSString* _buttonText;
	NSString* _legalText;
	NSString* _appTermsText;
	NSString* _privacyPolicyText;
	NSURL* _appTermsURL;
	NSURL* _privacyPolicyURL;

}

@property (nonatomic,copy,readonly) NSArray * rows;                            //@synthesize rows=_rows - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                     //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * legalText;                      //@synthesize legalText=_legalText - In the implementation block
@property (nonatomic,copy,readonly) NSString * appTermsText;                   //@synthesize appTermsText=_appTermsText - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyPolicyText;              //@synthesize privacyPolicyText=_privacyPolicyText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appTermsURL;                       //@synthesize appTermsURL=_appTermsURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * privacyPolicyURL;                  //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
-(NSURL *)privacyPolicyURL;
-(id)initWithRows:(id)arg1 titleText:(id)arg2 buttonText:(id)arg3 legalText:(id)arg4 appTermsText:(id)arg5 privacyPolicyText:(id)arg6 appTermsURL:(id)arg7 privacyPolicyURL:(id)arg8 ;
-(NSString *)appTermsText;
-(NSString *)privacyPolicyText;
-(NSURL *)appTermsURL;
-(NSArray *)rows;
-(NSString *)titleText;
-(NSString *)buttonText;
-(NSString *)legalText;
@end

