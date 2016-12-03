/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBWWWSegue : NSObject {

	NSArray* _pathComponents;
	/*^block*/id _viewControllerProvider;
	/*^block*/id _intentTargetProvider;
	/*^block*/id _analyticsInfoProvider;

}

@property (nonatomic,copy,readonly) NSArray * pathComponents;              //@synthesize pathComponents=_pathComponents - In the implementation block
@property (nonatomic,readonly) id viewControllerProvider;                  //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (nonatomic,readonly) id intentTargetProvider;                    //@synthesize intentTargetProvider=_intentTargetProvider - In the implementation block
@property (nonatomic,readonly) id analyticsInfoProvider;                   //@synthesize analyticsInfoProvider=_analyticsInfoProvider - In the implementation block
+(id)WWWSegueWithPathComponents:(id)arg1 intentTargetProvider:(/*^block*/id)arg2 analyticsInfoProvider:(/*^block*/id)arg3 ;
+(id)WWWSegueWithPathComponents:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)intentTargetProvider;
-(id)viewControllerProvider;
-(id)analyticsInfoProvider;
-(id)initWithPathComponents:(id)arg1 viewControllerProvider:(/*^block*/id)arg2 intentTargetProvider:(/*^block*/id)arg3 analyticsInfoProvider:(/*^block*/id)arg4 ;
-(id)description;
-(NSArray *)pathComponents;
@end

