/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBARLocaleServiceDataSourceChangeDelegate.h>

@protocol FBARLocaleServiceDataSource;
@class NSString;

@interface FBARLocaleService : NSObject <FBARLocaleServiceDataSourceChangeDelegate> {

	shared_ptr<msqrd::locale::LocaleService>* _engineService;
	NSString* _lastLocaleIdentifier;
	id<FBARLocaleServiceDataSource> _dataSource;

}

@property (nonatomic,readonly) shared_ptr<msqrd::services::ILocaleService>* engineServiceInterface; 
@property (nonatomic,retain) id<FBARLocaleServiceDataSource> dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
-(shared_ptr<msqrd::services::ILocaleService>*)engineServiceInterface;
-(void)localeServiceDataSource:(id)arg1 didChangeCurrentDeviceLocaleIdentifierTo:(id)arg2 ;
-(id)init;
-(void)setDataSource:(id<FBARLocaleServiceDataSource>)arg1 ;
-(id<FBARLocaleServiceDataSource>)dataSource;
@end

