/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBSavedTopLevelActionExperimentContext : FBExperimentContext {

	BOOL _enableSaveInShareMenu;
	BOOL _enableSaveOverlayButton;
	BOOL _enableSaveTopLevelButton;
	NSString* _saveInShareButtonMenuNuxText;
	NSString* _buttonNuxText;
	NSString* _saveTopLevelButtonNuxText;

}

@property (nonatomic,copy) NSString * saveInShareButtonMenuNuxText;              //@synthesize saveInShareButtonMenuNuxText=_saveInShareButtonMenuNuxText - In the implementation block
@property (nonatomic,copy) NSString * buttonNuxText;                             //@synthesize buttonNuxText=_buttonNuxText - In the implementation block
@property (nonatomic,copy) NSString * saveTopLevelButtonNuxText;                 //@synthesize saveTopLevelButtonNuxText=_saveTopLevelButtonNuxText - In the implementation block
@property (nonatomic,readonly) BOOL enableSaveInShareMenu;                       //@synthesize enableSaveInShareMenu=_enableSaveInShareMenu - In the implementation block
@property (nonatomic,readonly) BOOL enableSaveOverlayButton;                     //@synthesize enableSaveOverlayButton=_enableSaveOverlayButton - In the implementation block
@property (nonatomic,readonly) BOOL enableSaveTopLevelButton;                    //@synthesize enableSaveTopLevelButton=_enableSaveTopLevelButton - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)saveInShareButtonMenuNuxText;
-(void)setSaveInShareButtonMenuNuxText:(NSString *)arg1 ;
-(NSString *)buttonNuxText;
-(void)setButtonNuxText:(NSString *)arg1 ;
-(NSString *)saveTopLevelButtonNuxText;
-(void)setSaveTopLevelButtonNuxText:(NSString *)arg1 ;
-(BOOL)enableSaveInShareMenu;
-(BOOL)enableSaveOverlayButton;
-(BOOL)enableSaveTopLevelButton;
@end

