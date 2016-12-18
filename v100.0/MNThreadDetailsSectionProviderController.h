/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNThreadDetailsSectionProviding, FBProvider;
@class MNThreadViewModel, NSString;

@interface MNThreadDetailsSectionProviderController : NSObject <FBClassProvidable, MNThreadViewModelConfigurable> {

	MNThreadViewModel* _threadViewModel;
	id<MNThreadDetailsSectionProviding> _threadDetailsSectionProvider;
	id<FBProvider> _bankSectionProviderProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(void)_updateThreadDetailsSectionProviderWith:(id)arg1 ;
-(id)threadDetailsSectionProvider;
@end
