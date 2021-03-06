/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProgressViewUpdatePolicy.h>

@class NSString;

@interface FBDeceleratingProgressViewUpdatePolicy : NSObject <FBProgressViewUpdatePolicy> {

	BOOL _finishing;
	double _maxFakeProgress;
	float _finalProgress;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) float finalProgress;                   //@synthesize finalProgress=_finalProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinalProgress:(float)arg1 ;
-(id)initWithFinalProgress:(float)arg1 ;
-(void)finishWithCompletionBlock:(/*^block*/id)arg1 ;
-(float)finalProgress;
-(float)incrementForCurrentProgress:(double)arg1 ;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)animated;
-(double)updateInterval;
@end

