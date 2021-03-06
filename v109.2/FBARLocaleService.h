/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBARLocaleService : NSObject {

	NSString* _deviceLocaleIdentifier;
	shared_ptr<msqrd::locale::LocaleService>* _engineService;

}

@property (nonatomic,readonly) shared_ptr<msqrd::locale::LocaleService>* engineService;              //@synthesize engineService=_engineService - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceLocaleIdentifier;                               //@synthesize deviceLocaleIdentifier=_deviceLocaleIdentifier - In the implementation block
-(shared_ptr<msqrd::locale::LocaleService>*)engineService;
-(void)_updateFromCurrentLocale;
-(NSString *)deviceLocaleIdentifier;
-(void)forceUpdateCurrentLocale:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

