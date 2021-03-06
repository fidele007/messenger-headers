/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsUploader.h>

@protocol FBLocalContactsUploader, FBContactsStore, FBLocalContactsSyncDifferDelegate;
@class NSString;

@interface FBLocalContactsSyncDiffer : NSObject <FBLocalContactsUploader> {

	id<FBLocalContactsUploader> _localContactsUploader;
	id<FBContactsStore> _previouslySyncedContactsStore;
	id<FBLocalContactsSyncDifferDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLocalContactsSyncDifferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadContacts:(id)arg1 importId:(id)arg2 ;
-(void)cancelContactsUpload;
-(id)initWithLocalContactsUploader:(id)arg1 previouslySyncedContactsStore:(id)arg2 ;
-(void)setDelegate:(id<FBLocalContactsSyncDifferDelegate>)arg1 ;
-(id<FBLocalContactsSyncDifferDelegate>)delegate;
@end

