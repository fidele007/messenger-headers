/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNGroupsTableViewConfiguration;

@interface MNGroupsRoomsViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldFetchMoreThreads;
	BOOL _showsSearchBar;
	NSString* _title;
	MNGroupsTableViewConfiguration* _tableViewConfiguration;
	long long _serviceType;
	unsigned long long _viewModelType;

}

@property (nonatomic,copy,readonly) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) MNGroupsTableViewConfiguration * tableViewConfiguration;              //@synthesize tableViewConfiguration=_tableViewConfiguration - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchMoreThreads;                                               //@synthesize shouldFetchMoreThreads=_shouldFetchMoreThreads - In the implementation block
@property (nonatomic,readonly) unsigned long long viewModelType;                                          //@synthesize viewModelType=_viewModelType - In the implementation block
@property (nonatomic,readonly) BOOL showsSearchBar;                                                       //@synthesize showsSearchBar=_showsSearchBar - In the implementation block
-(id)initWithTitle:(id)arg1 tableViewConfiguration:(id)arg2 serviceType:(long long)arg3 shouldFetchMoreThreads:(BOOL)arg4 viewModelType:(unsigned long long)arg5 showsSearchBar:(BOOL)arg6 ;
-(MNGroupsTableViewConfiguration *)tableViewConfiguration;
-(unsigned long long)viewModelType;
-(BOOL)shouldFetchMoreThreads;
-(BOOL)showsSearchBar;
-(NSString *)title;
-(long long)serviceType;
@end

