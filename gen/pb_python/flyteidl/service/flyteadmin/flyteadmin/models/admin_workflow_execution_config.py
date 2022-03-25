# coding: utf-8

"""
    flyteidl/service/admin.proto

    No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)  # noqa: E501

    OpenAPI spec version: version not set
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from flyteadmin.models.admin_annotations import AdminAnnotations  # noqa: F401,E501
from flyteadmin.models.admin_labels import AdminLabels  # noqa: F401,E501
from flyteadmin.models.admin_raw_output_data_config import AdminRawOutputDataConfig  # noqa: F401,E501
from flyteadmin.models.core_security_context import CoreSecurityContext  # noqa: F401,E501


class AdminWorkflowExecutionConfig(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'max_parallelism': 'int',
        'security_context': 'CoreSecurityContext',
        'raw_output_data_config': 'AdminRawOutputDataConfig',
        'labels': 'AdminLabels',
        'annotations': 'AdminAnnotations'
    }

    attribute_map = {
        'max_parallelism': 'max_parallelism',
        'security_context': 'security_context',
        'raw_output_data_config': 'raw_output_data_config',
        'labels': 'labels',
        'annotations': 'annotations'
    }

    def __init__(self, max_parallelism=None, security_context=None, raw_output_data_config=None, labels=None, annotations=None):  # noqa: E501
        """AdminWorkflowExecutionConfig - a model defined in Swagger"""  # noqa: E501

        self._max_parallelism = None
        self._security_context = None
        self._raw_output_data_config = None
        self._labels = None
        self._annotations = None
        self.discriminator = None

        if max_parallelism is not None:
            self.max_parallelism = max_parallelism
        if security_context is not None:
            self.security_context = security_context
        if raw_output_data_config is not None:
            self.raw_output_data_config = raw_output_data_config
        if labels is not None:
            self.labels = labels
        if annotations is not None:
            self.annotations = annotations

    @property
    def max_parallelism(self):
        """Gets the max_parallelism of this AdminWorkflowExecutionConfig.  # noqa: E501

        Can be used to control the number of parallel nodes to run within the workflow. This is useful to achieve fairness.  # noqa: E501

        :return: The max_parallelism of this AdminWorkflowExecutionConfig.  # noqa: E501
        :rtype: int
        """
        return self._max_parallelism

    @max_parallelism.setter
    def max_parallelism(self, max_parallelism):
        """Sets the max_parallelism of this AdminWorkflowExecutionConfig.

        Can be used to control the number of parallel nodes to run within the workflow. This is useful to achieve fairness.  # noqa: E501

        :param max_parallelism: The max_parallelism of this AdminWorkflowExecutionConfig.  # noqa: E501
        :type: int
        """

        self._max_parallelism = max_parallelism

    @property
    def security_context(self):
        """Gets the security_context of this AdminWorkflowExecutionConfig.  # noqa: E501

        Indicates security context permissions for executions triggered with this matchable attribute.  # noqa: E501

        :return: The security_context of this AdminWorkflowExecutionConfig.  # noqa: E501
        :rtype: CoreSecurityContext
        """
        return self._security_context

    @security_context.setter
    def security_context(self, security_context):
        """Sets the security_context of this AdminWorkflowExecutionConfig.

        Indicates security context permissions for executions triggered with this matchable attribute.  # noqa: E501

        :param security_context: The security_context of this AdminWorkflowExecutionConfig.  # noqa: E501
        :type: CoreSecurityContext
        """

        self._security_context = security_context

    @property
    def raw_output_data_config(self):
        """Gets the raw_output_data_config of this AdminWorkflowExecutionConfig.  # noqa: E501

        Encapsulates user settings pertaining to offloaded data (i.e. Blobs, Schema, query data, etc.).  # noqa: E501

        :return: The raw_output_data_config of this AdminWorkflowExecutionConfig.  # noqa: E501
        :rtype: AdminRawOutputDataConfig
        """
        return self._raw_output_data_config

    @raw_output_data_config.setter
    def raw_output_data_config(self, raw_output_data_config):
        """Sets the raw_output_data_config of this AdminWorkflowExecutionConfig.

        Encapsulates user settings pertaining to offloaded data (i.e. Blobs, Schema, query data, etc.).  # noqa: E501

        :param raw_output_data_config: The raw_output_data_config of this AdminWorkflowExecutionConfig.  # noqa: E501
        :type: AdminRawOutputDataConfig
        """

        self._raw_output_data_config = raw_output_data_config

    @property
    def labels(self):
        """Gets the labels of this AdminWorkflowExecutionConfig.  # noqa: E501

        Custom labels to be applied to a triggered execution resource.  # noqa: E501

        :return: The labels of this AdminWorkflowExecutionConfig.  # noqa: E501
        :rtype: AdminLabels
        """
        return self._labels

    @labels.setter
    def labels(self, labels):
        """Sets the labels of this AdminWorkflowExecutionConfig.

        Custom labels to be applied to a triggered execution resource.  # noqa: E501

        :param labels: The labels of this AdminWorkflowExecutionConfig.  # noqa: E501
        :type: AdminLabels
        """

        self._labels = labels

    @property
    def annotations(self):
        """Gets the annotations of this AdminWorkflowExecutionConfig.  # noqa: E501

        Custom annotations to be applied to a triggered execution resource.  # noqa: E501

        :return: The annotations of this AdminWorkflowExecutionConfig.  # noqa: E501
        :rtype: AdminAnnotations
        """
        return self._annotations

    @annotations.setter
    def annotations(self, annotations):
        """Sets the annotations of this AdminWorkflowExecutionConfig.

        Custom annotations to be applied to a triggered execution resource.  # noqa: E501

        :param annotations: The annotations of this AdminWorkflowExecutionConfig.  # noqa: E501
        :type: AdminAnnotations
        """

        self._annotations = annotations

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(AdminWorkflowExecutionConfig, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, AdminWorkflowExecutionConfig):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
