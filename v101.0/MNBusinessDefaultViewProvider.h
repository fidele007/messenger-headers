/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBusinessViewProvider.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNBusinessCTAHandling;
@class FBImageDownloader, NSString;

@interface MNBusinessDefaultViewProvider : NSObject <MNBusinessViewProvider, FBViewerContextClassProvidable> {

	FBImageDownloader* _imageDownloader;
	id<MNBusinessCTAHandling> _ctaHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClassForViewModel:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ctaHandler:(id)arg2 ;
-(id)viewForViewModel:(id)arg1 ;
@end

